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

/// Creates the text of a mermaid flowchart
/// that shows a certain color scheme
std::vector<std::string> mermaid_text::to_text() const {
  std::vector<std::string> text;
  text.push_back("TODO");
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
