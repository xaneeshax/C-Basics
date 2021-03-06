#include <iostream>
int main()
{
  double x;
  double y;
  x = 10;
  y = (x = 100);
  std::cout << x << "\t" << y << std::endl;
}
