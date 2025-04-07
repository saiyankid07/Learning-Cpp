#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int p,t,r;
  float SI;
  cout<< "Enter P,T,R: ";
  std::cin >>p>>t>>r;
  SI = (p*t*r)/100;
  cout<< "Simple Intrest is " << SI;
  return 0;
}