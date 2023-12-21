#ifndef MERMAID_TEXT_H
#define MERMAID_TEXT_H

#include <iosfwd>

class mermaid_text
{
public:
  mermaid_text();
};

void mermaid_text_test();

std::ostream& operator<<(std::ostream& os, const mermaid_text& t) noexcept;

#endif // MERMAID_TEXT_H
