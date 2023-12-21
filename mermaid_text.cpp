#include "mermaid_text.h"

#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <sstream>

mermaid_text::mermaid_text()
{

}
/*
/// Creates the text of a mermaid flowchart
/// that shows a certain color scheme
std::vector<std::string> create_text() {
  std::vector<std::string> text;
  return text;
}
*/

void mermaid_text_test() {
  // Must have text
  {
    std::stringstream s;
    s << mermaid_text();
    assert(!s.str().empty());
  }
}

std::ostream& operator<<(std::ostream& os, const mermaid_text&) noexcept {
  os << "TODO";
  return os;
}
