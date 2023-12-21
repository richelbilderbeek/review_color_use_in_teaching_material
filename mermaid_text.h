#ifndef MERMAID_TEXT_H
#define MERMAID_TEXT_H

#include <iosfwd>
#include <string>
#include <vector>

class mermaid_text
{
public:
  mermaid_text();

  /// Get the text as a text
  std::vector<std::string> to_text() const;
};

std::vector<std::string> get_header_text() noexcept;

void mermaid_text_test();

std::ostream& operator<<(std::ostream& os, const mermaid_text& t) noexcept;

#endif // MERMAID_TEXT_H
