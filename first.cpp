#include <iostream>
using namespace std;
int main(){
  string name;
  int age;
  cout << "Enter your name: ";
  getline(cin, name);
  cin.ignore();
  cout << "Enter your age: ";
  cin >> age;
  cout<< "Hello, " << name <<"! you are " << age << " years old.";

  return 0;
};
//Features of C++
/**
 * OOP
 * Not purly OOP
 * general purpose Programming Language 
 * Compiled lanfuage 
 * faster than other language
 * mid level Language
 * Portable/Machine independent, but platform dependent (same OS) 
 * Powerful lang- as it supports many built in functions and has many useful library 
 * It is extensible 
 * supports dynamic memory allocation
 * case sensitive 
 * supports pointers
 * strongly typed/ staticly typed language 
 */
//Structure Of C++ Program
/*
1. Documentation Section
2. Link Section
      -> Header
        ->
      -> NameSpace
3. Definition Section
4. global Declaration Section
5. Class Definition
    -> Data Members
    -> Member function definition
6. Main Function Section
7. Sub-Program section
    -> user-defined function    
*/