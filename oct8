#include <iostream>
#include <string>
using namespace std;


string round (double v){
  int val = (v * 100000);
  if (val %10 >= 5)
    val += 10;
  return itoa(val/100000);
}

int main(){
  int n;
  cin >> n;
  
  for (int i = 0; i < n; i++){
      int inM, inY, stM, stY;
      double ret = 0;
      
      cin >> inM;
      cin >> inY;
      cin >> stM;
      cin >> stY;
      
      if (inY ==stY){
	int count = 0;
	for (int j = inM; j < stM; j++){
	    count++;
	}
	ret = count/24;
      }
      
      else{
	ret+=.5;
	int count = 0;
	for (int j = inY; j <stY; j++){
	  count++;
	}
	ret +=count;
	count = 0;
	for (int j = 1; j < stM; j++){
	    count++;
	}
	ret+=count/12;
      }
      cout << round(ret) << endl;
      
  }



  return 0;
}
