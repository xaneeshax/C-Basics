#include <string>
#include <iostream>
#include <vector>
#include <array>

int main()
{

  int data[] = {1, 2, 3, 4, 5, 6};

  // Iterate by value
  for (int n : data)
  {
    std::cout << n << "\t";
  }

  // something should happen atleast once
  std::string password = "tacos";
  std::string guess;
  do
  {
    std::cout << "Guess the password: ";
    std::cin >> guess;
  } while (guess != password);

  // Basic while loop
  int i = 10;
  while (i > 0)
  {
    std::cout << i << std::endl;
    i--;
  }

  // Basic while loop
  int factorial = 5;
  i = (factorial - 1);

  while(i > 1)
  {
    factorial *= i;
    i--;
  }
  std::cout << factorial << std::endl;

}
