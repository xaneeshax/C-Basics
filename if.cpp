#include <iostream>

int main()
{
  std::cout << "How old are you?";
  int age;
  std::cin >> age;

  if (age < 13)
  {
    std::cout << "you're not old enough\n";
  }
  else if (age < 19)
  {
    std::cout << "You're almost 19\n";
  }
  else
  {
    std::cout << "Always";
  }


  int answer = 11;
  std::cout << "Guess the number: ";
  int guess;
  std::cin >> guess;
  int points = guess == answer ? 10 : 0;

  std::cout << points << std::endl;
}
