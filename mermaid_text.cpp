#include "mermaid_text.h"

#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <sstream>

mermaid_text::mermaid_text()
{

}

std::vector<std::string> get_header_text() noexcept
{
  return
  {
    "%% Direction is top->down",
    "flowchart TD"
  };
}

std::vector<std::string> get_hex_values() noexcept
{
  return { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f" };
}

std::vector<std::string> get_invisible_edges(
  const std::string& color_name_1,
  const std::string& color_name_2
) noexcept
{
  const auto& node_names_1{get_node_names(color_name_1)};
  const auto& node_names_2{get_node_names(color_name_2)};
  assert(node_names_1.size() == node_names_2.size());
  const int n_nodes = node_names_1.size();
  std::vector<std::string> text;
  for (int i{0}; i!=n_nodes; ++i) {
    const std::string line{
        node_names_1[i]
      + " ~~~ "
      + node_names_2[i]
    };
    text.push_back(line);
  }
  return text;
}

std::string get_node_fill_color(const std::string& color_name, const std::string node_number) noexcept
{
  if (color_name == "red"  ) return { std::string("#") + std::string("f") + node_number      + node_number     };
  if (color_name == "green") return { std::string("#") + node_number      + std::string("f") + node_number     };
  if (color_name == "blue" ) return { std::string("#") + node_number      + node_number      + std::string("f")};
  assert(!"Should not get here");
  return "";
}

std::vector<std::string> get_node_fill_colors(const std::string& color_name) noexcept
{
  std::vector<std::string> text;
  for (const auto& node_number: get_hex_values()) {
    text.push_back(get_node_fill_color(color_name, node_number));
  }
  return text;
}

std::string get_node_name(const std::string& color_name, const std::string node_number) noexcept
{
  return {color_name + "_" + node_number};
}

std::vector<std::string> get_node_names(const std::string& color_name) noexcept
{
  std::vector<std::string> text;
  for (const auto& node_number: get_hex_values()) {
    text.push_back(get_node_name(color_name, node_number));
  }
  return text;
}

std::vector<std::string> get_node_styles(const std::string& color_name) noexcept
{
  const auto node_names{get_node_names(color_name)};
  const auto node_fill_colors{get_node_fill_colors(color_name)};
  assert(node_names.size() == node_fill_colors.size());

  std::vector<std::string> text;
  const int n = node_names.size();
  for (int i{0}; i!=n; ++i) {
    const std::string line{
        "style "
      + node_names[i]
      + " fill:"
      + node_fill_colors[i]
      + ",color:#000,stroke:#000"
    };
    text.push_back(line);
  }
  return text;
}

std::vector<std::string> get_subgraph(const std::string& color_name) noexcept
{
  std::vector<std::string> text;
  text.push_back("    subgraph sub_" + color_name);
  for (const auto& node_name: get_node_names(color_name)) {
    text.push_back(std::string("        ") + node_name);
  }
  for (const auto& node_style: get_node_styles(color_name)) {
    text.push_back(std::string("        ") + node_style);
  }
  text.push_back("    end");
  text.push_back("    " + get_subgraph_style(color_name));
  return text;
}

std::string get_subgraph_fill_color(
  const std::string& color_name
) noexcept
{
  return get_node_fill_color(color_name, "c");
}

std::string get_subgraph_stroke_color(
  const std::string& color_name
) noexcept
{
  return get_subgraph_fill_color(color_name);
}

std::string get_subgraph_style(const std::string& color_name) noexcept
{
  return
    std::string("style sub_")
    + color_name
    + " fill:"
    + get_subgraph_fill_color(color_name)
    + ",color:#000,stroke:"
    + get_subgraph_stroke_color(color_name)
  ;
}

/// Creates the text of a mermaid flowchart
/// that shows a certain color scheme
std::vector<std::string> mermaid_text::to_text() const {
  std::vector<std::string> text{get_header_text()};
  const std::vector<std::string> color_names {
    "red",
    "green",
    "blue"
  };
  // Create the subgraphs
  for (const auto& color_name: color_names) {
    for (const auto& line: get_subgraph(color_name)) {
      text.push_back(line);
    }
  }
  // Create the invisible lines
  text.push_back("");
  text.push_back("%% Invisible edges, to align the subgraphs vertically");
  const int n_colors = color_names.size();
  assert(n_colors >= 2);
  for (int i = 0; i != n_colors - 1; ++i) {
    const int j{i + 1};
    assert(j < n_colors);
    const std::string& color_name_1{color_names[i]};
    const std::string& color_name_2{color_names[j]};
    assert(color_name_1 != color_name_2);
    for (const auto& line: get_invisible_edges(color_name_1, color_name_2)) {
      text.push_back("    " + line);
    }
  }

  return text;
}

void mermaid_text_test() {
  // Must have text
  {
    std::stringstream s;
    s << mermaid_text();
    assert(!s.str().empty());
  }
  // Can get the header text
  {
    assert(!get_header_text().empty());
  }
  // There are 16 hex values
  {
    assert(get_hex_values().size() == 16);
  }
  // There are 16 node names
  {
    assert(get_node_names("red").size() == 16);
  }
  // There are 16 node fill colors
  {
    assert(get_node_fill_colors("red").size() == 16);
  }
  // There are 16 node styles
  {
    assert(get_node_styles("red").size() == 16);
  }
  // A subgraph has 1 + 16 + 16 + 1 + 1 lines
  {
    assert(get_subgraph("red").size() == 35);
  }
}

std::ostream& operator<<(std::ostream& os, const mermaid_text& t) noexcept {
  std::stringstream s;
  for (const auto& line: t.to_text())
  {
    s << line << '\n';
  }
  std::string str{s.str()};
  assert(!str.empty());
  str.pop_back();
  os << str;
  return os;
}
