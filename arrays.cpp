#include <iostream>

void print_array(int array[], int size)
{
  for(int i = 0; i < size; i++)
  {
    std::cout << array[i] << "\t";
  }

  std::cout << std::endl;
}

int main()
{

  int guesses[] = {12, 23, 34, 45, 56};
  int size = sizeof(guesses) / sizeof(guesses[0]);

  std::cout << size << std::endl;
  print_array(guesses, size);

  for(int i = 0; i < size; i++)
  {
    std::cout << guesses[i] << "\t";
  }
  
  int grades[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cout << grades[i][j] << "\t";
    }
    std::cout << "\n";
  }
  
  return 0;
}
