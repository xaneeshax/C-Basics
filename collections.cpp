#include <iostream>
#include <array>

void print_array(std::array<int, 20>  &data)
{
  for (int i = 0; i < data.size(); i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

int main()
{
  std::array<int, 20> data = {1, 2, 3};
  print_array(data);
}

// Use Cases for Arrays
//  - size method
// - static
// - decay to pointer

// Use Cases for Vectors
// - easy for assigning values
// - dynamic
// - pass by value
// .size()

// Use Cases for Templatized Arrays
// - easy for assigning values
// - size method
// - static
// - pass by value
