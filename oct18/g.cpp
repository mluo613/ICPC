#include <iostream>
#include <math.h>
using namespace std;

double distance(double x1, double x2, double y1, double y2){
  return pow((pow( (x1-x2), 2) + pow( (y1-y2), 2 )), .5)
}
  
int main(){
  int n = -1;
  int m = -1;
  while (n != 0 && m != 0){
    cin >> n;
    cin >> m;
    double* xcoord = new double[2*n + 1];
    double* ycoord = new double[2*n + 1];
    int temp;
    for (int i = 0; i < (2*n + 1); i++){
      cin >> temp;
      coord[i] = temp;
      cin >> temp;
      coord[i] = temp;
    }
    for (int i = 0; i < n; i++){
      double r1 = distance(xcoord[i],xcoord[i+1],ycoord[i],ycoord[i+1]);
      double r2 = distance(xcoord[i+1],xcoord[i+2],ycoord[i+1],ycoord[i+2])
      double s1 = (xcoord[i] - xcoord[i+1])/(ycoord[i] - ycoord[i+1]);
      double s2 = (xcoord[i+1] - xcoord[i+2])/(ycoord[i+1] - ycoord[i+2]);
      
    
    
    
  }//end while
  
  
  
  
return 0;
}
