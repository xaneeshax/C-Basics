#include <iostream>
#include <cmath>

#define X 10;

using namespace std;
using std::cout;
using std::cin;


double power(double base, int exponent)
{
  double result = 1;
  for(int i = 0; i < exponent; i++)
  {
    result = result * base;
  }
  return result;
}

void print_pow(double base, int exponent)
{
  // Call my power function
  cout << base << " raised to the power of " << exponent << " is "
  << power(base,exponent) << std::endl;
}

int main()
{
  enum { y = 100 }
  // y = 50 will not work since it is an enum constant
  const int year = 2021;

  double base;
  int exponent;
  cout << "What is the base? ";
  cin >> base;
  cout << "What is the exponent? ";
  cin >> exponent;
  print_pow(base, exponent);
  // Call my power function
  double myPower = power(base,exponent);
  cout << myPower << std::endl;

  // Call built-in power function
  double power = pow(base, exponent);
  cout << power << endl;

  /// Just Power
  cout << pow(10,2) << endl;

  //slices of pizza
  int slices = 5; //declaration and initialization
  cout << "How many pizzas did you eat?: ";
  cin >> slices;
  cout << "You have " << slices << " slices of pizza. " << std::endl;

  // Mod Functions
  cout << fmax(10, 3.25) << endl;
  cout << ceil(remainder(10, 3.25)) << endl;
  return 0;
}
