#include <string>
#include <iostream>

int main()
{
  std::string sentence = "hey my name is aneesha";
  for (int i = 0; i < sentence.size(); i++)
  {
    std::cout << sentence[i] << std::endl;
    if(sentence[i] == 's')
    {
      std::cout << "found s!\n";
      break;
    }
  }

  for(int i = 0; i < sentence.size(); i++)
  {
    if(sentence[i] == ' ')
    {
      continue;
    }
    std::cout << sentence[i] << std::endl;
  }
}
