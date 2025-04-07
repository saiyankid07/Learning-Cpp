#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int radius, height;
  float volume;
  float pi = 3.14;
  cout<< "Enter radius and height: ";
  cin >> radius>>height;
  volume = pi * radius*radius * height;
  cout<<"The volume of the Cylinder is: " << volume;
  return 0; 
} 