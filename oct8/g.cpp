#include <iostream>
using namespace std;

int main(){

int n;
cin >> n;

  for (int i = 0; i < n; i++){
      int array[20];
      for (int j = 0; j < 20; j++){
	int temp;
	cin >> temp;
	array[j] = temp;
      }
      
      int output[20];
      int count = 0;
      for (int j = 0; j < 20; j++)
	output[j] = 0;
      for (int q = 20; q > 0; q--){
	count += array[q];
	  if(count % 2 == 0)
	    count /= 2;
	  else{
	    output[q] = 1;
	    count = (count - 1)/2;
	  }
      }
      output[0] = count;


      for (int j = 0; j < 20; j++){
	cout << output[j] << " ";
      }




  }




return 0;
}