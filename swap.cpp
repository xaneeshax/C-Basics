#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
  std::cout << "First: " << a << " Second: " << b << "\n";
}

/*
void swap(std::string a, std::string b)
{
  std::string temp = a;
  a = b;
  b = temp;
}
*/

int main()
{
  int a  = 20;
  int b = 10;

  swap(a,b);
  std::cout << "a: " << a << " b: " << b << "\n";


  std::string meal = "tacos";
  std::string dessert = "pudding";

  swap(meal, dessert);
  std::cout << "meal: " << meal << " dessert: " << dessert << "\n";

}
