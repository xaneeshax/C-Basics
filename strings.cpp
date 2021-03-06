#include <iostream>
#include <string>

using namespace std;

int main()
{
  std::string greeting;

  getline(std::cin, greeting);
  std::cout << greeting.length() << std::endl;

  greeting.append(" there!");
  std::cout << greeting << std::endl;

  greeting.insert(3, "  ");
  std::cout << greeting << std::endl;

  greeting.erase(3, 2);
  std::cout << greeting << std::endl;

  greeting.erase(3);
  std::cout << greeting << std::endl;

  greeting.pop_back();
  std::cout << greeting << std::endl;

  greeting.replace(0, 4, "yoyoyoyo");
  std::cout << greeting << std::endl;

  int index = greeting.find("hello");
  std::cout << index << std::endl;

  std::cout << greeting.substr(5, 2) << std::endl;

  std::cout << greeting.find_first_of("abcde") << std::endl;
}
