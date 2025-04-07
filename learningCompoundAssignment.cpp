#include<iostream>
using namespace std;
int main (){
  int sum = 10;
  int x = 5;
  sum += x; // plus assign
  cout<< sum << endl;
  sum -= x; // minus assign
  cout<< sum << endl;
  sum *= x; // multiply assign
  cout<< sum << endl;
  sum /= x; // divide assign
  cout<< sum <<endl;
  sum %= x; // reminder assign
  cout<< sum <<endl;
  return 0;
}