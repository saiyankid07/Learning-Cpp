#include<iostream>
#include<math.h>
using namespace std;
int main(){
  float r, area;
  cout << "Enter Radius ";
  cin >> r;
  area = (float) 22/7 * r*r;
  cout<< "Area is "<<area<< endl;
  return 0;
}