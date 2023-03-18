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
   
   string1.MyString = "Hi Anand, welcome in cpp programing!";
   string2.MyString = "Thanks! This is my first cpp program";
   string1.PrintMyString();
   string2.PrintMyString();
   
   return 0;
}