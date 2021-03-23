#include <iostream>
#include <vector>

class User
{
  std::string status = "Co-manager";

  public:
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
      return status;
    }
};

int add_new_user(std::vector<User> &users, User user)
{
  for(int i = 0; i < users.size(); i++) {
    if(users[i].first_name == user.first_name &&
      users[i].last_name == user.last_name) {
       return i;
    }
  }
  users.push_back(user);
  return users.size() - 1;
}

int main()
{
  User person1, person2, person3;

  person1.first_name = "Jim";
  person1.last_name = "Halpert";

  person2.first_name = "Pam";
  person2.last_name = "Beesly";

  person3.first_name = "Dwight";
  person3.last_name = "Schrute";

  std::vector<User> users;
  users.push_back(person1);
  users.push_back(person2);
  users.push_back(person3);


  std::cout << "First Name: " << users[1].first_name << std::endl;
}
