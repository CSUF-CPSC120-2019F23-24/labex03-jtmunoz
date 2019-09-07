// This program tests output on the ASCII character set, and on the sizeof operator.

#include <iostream>
#include <string>


int main()
{
  // TODO#1: try changing these values to others found in the ASCII character set
  // The class Quick Reference Guide contains this chart on page 5
  char my_char1 = 74;   // decimal
  char my_char2 = 0x4A; // hex
  char my_char3 = 'J';  // character

  std::cout << "Char1: " << my_char1 << std::endl;
  std::cout << "Char2: " << my_char2 << std::endl;
  std::cout << "Char3: " << my_char3 << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#2: the following statement displays a plus sign
  // add 3 more cout statements that all print the same thing - a plus sign
  // however, use a different method to do so for each cout statement
  // hint: use the ASCII character set
  std::cout << "O" << std::endl;

  char new_char1 = 79;
  char new_char2 = 0x4F;
  char new_char3 = 'O';

  std::cout << new_char1 << std::endl;
  std::cout << new_char2 << std::endl;
  std::cout << new_char3 << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#3: update the following statement to include escape characters
  // note that clang does not require an escape character on the single quote
  // but many other compilers do require it
  std::cout << "'\\n'" << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#4: try changing the variable types and the data types in the
  // statements below to see what is returned by the sizeof operator
  std::string my_string = "Jordan";
  std::cout << my_string << ' ' << sizeof(my_string) << '\n';
  double my_float = 33.5;
  std::cout << my_float << ' ' << sizeof(my_float) << '\n';

  std::string new_string;
  std::cout << "A string is stored in " << sizeof(std::string) << " bytes\n";
  std::cout << "The variable \"new_string\" is stored in " << sizeof(new_string) << " bytes\n";

  return 0;
}
