#include <iostream>

struct User
{
  std::string first_name;
  std::string last_name;
  std::string get_status()
  {
    return status;
  }
private:
    std::string status = "Grandmaster";
};


int main()
{
  User person;
  person.first_name = "Beth";
  person.last_name = "Harmon";
  // Causes an error when the field is private
  // person.status = "Champion";

  std::cout << "First Name: " <<  person.first_name << std::endl;
  std::cout << "Status: " <<  person.get_status() << std::endl;
  // std::cout << "Status: " << person.status << std::endl;
  return 0;
}
