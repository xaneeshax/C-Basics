#include <iostream>
#include <vector>

// Pass reference
void print_vector_ref(std::vector<int> &data)
{
  data.push_back(12);
  for(int i = 0; i < data.size(); i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}


// Pass value
void print_vector_val(std::vector<int> data)
{
  data.push_back(12);
  for(int i = 0; i < data.size(); i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}


 int main()
 {
   std::vector<int> data = {1,2,3};
   data.push_back(12);
   std::cout << data[data.size() - 1] << std::endl;
   data.pop_back();
   std::cout << data.size() << std::endl;

   print_vector_val(data);
   print_vector_val(data);
   print_vector_val(data);

   print_vector_ref(data);
   print_vector_ref(data);
   print_vector_ref(data);
 }
