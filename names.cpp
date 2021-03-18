#include <string>
#include <iostream>

int main()
{
  std::string name_answer = "Aneesha";
  int age_answer = 19;

  std::string name_guess;
  std::cout << "Guess my name!: ";
  std::cin >> name_guess;

  int age_guess;
  std::cout << "Guess my age!: ";
  std::cin >> age_guess;

  if (!(name_guess == name_answer) && age_guess == age_answer)
  {
    std::cout << "You got it right!\n";
  }
  return 0;
}
