#include <iostream>
#include <string>

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;

  std::cout << "a: " << a << " b: " << b << "\n";
}

void swap(std::string a, std::string b)
{
  std::string temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a  = 20;
  int b = 10;

  swap(a,b);

  std::cout << "a: " << a << " b: " << b << "\n";

}
