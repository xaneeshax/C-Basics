#include <iostream>
#include <fstream>
#include <vector>

int main()
{

  // Reading Files
  std::ifstream file ("hello.txt");

  std::vector<std::string> names;
  std::string input;

  while(file >> input)
  {
    names.push_back(input);
  }

  for(std::string name : names)
  {
    std::cout << name << std::endl;
  }

  // Writing to Files
  std::ofstream file ("hello.txt", std::ios::app);

  if(file.is_open())
  {
    std::cout << "success";
  }

  file << "hey" << std::endl;
  names.push_back("Cat");
  names.push_back("Dog");
  names.push_back("Pig");

  for(std::string name : names)
  {
    file << name << std::endl;
  }


  file.close();
}
