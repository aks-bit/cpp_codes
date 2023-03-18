#include <iostream>

using namespace std;

class StringPrint
{
public:
  string MyString;
  
  void PrintMyString()
       {
           cout << "This is my string: " << MyString<< "\n";
       }
};
int main() {
   StringPrint string1;
   StringPrint string2;
   StringPrint string3;
   
   string1.MyString = "Hi Anand, welcome in cpp programing!";
   string2.MyString = "Thanks! This is my first cpp program.";
   string3.MyString = "Hope, I will become a good cpp programmer.";
   string1.PrintMyString();
   string2.PrintMyString();
   string3.PrintMyString();
   
   return 0;
}