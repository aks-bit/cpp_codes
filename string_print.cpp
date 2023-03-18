#include <iostream>

using namespace std;

class StringPrint
{
public:
  string MyString;
  
  void PrintMyString()
       {
           cout << "This is my string: " << MyString;
       }
};
int main() {
   StringPrint string1;
   
   string1.MyString = "Hi Anand, welcome in cpp programing!";
   string1.PrintMyString();
   
   return 0;
}