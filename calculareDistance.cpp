#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int x1,y1,x2,y2;
  float dist;
  cout<< "Enter x1,x2,y1,y2 values: ";
  cin >> x1>>x2>>y1>>y2;
  dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  cout<< "The distance between two points is: " << dist;
  return 0;
}