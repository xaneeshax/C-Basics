#include <string>
#include <iostream>

int main()
{

  enum season{summer, spring, fall, winter};
  season now = winter;
  swith (now)
  {
    case summer:
      break;
    case spring:
      break;
    case fall:
      break;
    case winter:
    std::cout << "Stay warm!\n";
      break;
  }


  int age;
  std::cout << "What is your age?: ";
  std::cin >> age;

  switch(age)
  {
    case 13:
      std::cout << "Your age is 13. Wow\n";
      break;
    case 14:
      std::cout << "You're 14\n";
      break;
    default:
      std::cout << "Catch all\n";
      break;
  }
  return 0;
}
