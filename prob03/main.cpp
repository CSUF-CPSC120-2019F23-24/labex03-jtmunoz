// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{
  int height;

  //Get A User's height
  std::cout << "Please enter height in inches: ";
  std::cin  >> height;

  //Calculate A User's feet and inches
  int feet = height / 12;
  int inches = height % 12;

  //Print Out calculation
  std::cout << "The person's height is "<< feet << "'" << inches << "\"" << std::endl;

  return 0;
}
