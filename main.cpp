/// Creates a mermaid flowchart that shows a certain color scheme

#include <iostream>
#include "mermaid_text.h"

void test() {
  mermaid_text_test();
}

int main() {
  test();
  std::cout << mermaid_text(
    get_all_color_names(),
    { "0", "9", "c", "f"},
    "c"
  ) << '\n';
}
