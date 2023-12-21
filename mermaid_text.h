#ifndef MERMAID_TEXT_H
#define MERMAID_TEXT_H

#include <iosfwd>
#include <string>
#include <vector>

class mermaid_text
{
public:
  mermaid_text(
    const std::vector<std::string>& color_names,
    const std::string& saturation
  );

  /// Get the text as a text
  std::vector<std::string> to_text() const;

  private:
  std::vector<std::string> m_color_names;
  std::string m_saturation;
};

std::vector<std::string> get_all_color_names() noexcept;

std::vector<std::string> get_header_text() noexcept;

std::vector<std::string> get_hex_values() noexcept;

std::vector<std::string> get_invisible_edges(
  const std::string& color_name_1,
  const std::string& color_name_2
) noexcept;

std::vector<std::string> get_node_fill_colors(const std::string& color_name) noexcept;

std::string get_node_name(const std::string& color_name, const std::string& node_number) noexcept;

std::vector<std::string> get_node_names(const std::string& color_name) noexcept;

std::vector<std::string> get_subgraph(
  const std::string& color_name,
  const std::string& saturation
) noexcept;

std::string get_subgraph_fill_color(
  const std::string& color_name,
  const std::string& saturation
) noexcept;

std::string get_subgraph_stroke_color(
  const std::string& color_name,
  const std::string& saturation
) noexcept;

std::string get_subgraph_style(
  const std::string& color_name,
  const std::string& saturation
) noexcept;

void mermaid_text_test();

std::ostream& operator<<(std::ostream& os, const mermaid_text& t) noexcept;

#endif // MERMAID_TEXT_H
