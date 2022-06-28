#include <iostream>

#define ANSI_COLOR_RESET "\033[0m"
#define ANSI_COLOR_BLUE  "\033[34m"
#define ANSI_COLOR_RED   "\033[31m"
#define ANSI_COLOR_GREEN "\033[32m"
#define ANSI_COLOR_BOLD_BLUE  "\033[1;34m"
#define ANSI_COLOR_BOLD_RED   "\033[1;31m"
#define ANSI_COLOR_BOLD_GREEN "\033[1;32m"
#define ANSI_COLOR_BG_BLUE  "\033[37;44m"
#define ANSI_COLOR_BG_RED   "\033[37;41m"
#define ANSI_COLOR_BG_GREEN "\033[37;42m"

int main(int argc, char ** argv)
{
  std::cout << ANSI_COLOR_BLUE "This text is blue." ANSI_COLOR_RESET << std::endl;
  std::cout << ANSI_COLOR_RED "This text is red." ANSI_COLOR_RESET << std::endl;
  std::cout << ANSI_COLOR_GREEN "This text is green." ANSI_COLOR_RESET << std::endl;

  std::cout << ANSI_COLOR_BOLD_BLUE "This text is bold blue." ANSI_COLOR_RESET << std::endl;
  std::cout << ANSI_COLOR_BOLD_RED "This text is bold red." ANSI_COLOR_RESET << std::endl;
  std::cout << ANSI_COLOR_BOLD_GREEN "This text is bold green." ANSI_COLOR_RESET << std::endl;

  std::cout << ANSI_COLOR_BG_BLUE "This text is backgroud blue." ANSI_COLOR_RESET << std::endl;
  std::cout << ANSI_COLOR_BG_RED "This text is backgroud red." ANSI_COLOR_RESET << std::endl;
  std::cout << ANSI_COLOR_BG_GREEN "This text is backgroud green." ANSI_COLOR_RESET << std::endl;
  
  return 0;
}
