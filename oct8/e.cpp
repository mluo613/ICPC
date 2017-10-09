#include <iostream>
using namespace std;


bool test(int t[], int index, int arr[]){
  
  
      for (int i = 0; i < 14; i++){
	if (arr[i] == index +1){
	  arr[i] = 0;
	  arr[i+1] = 0;
	  break;
	}
      }
      
      for (int i = 0; i < 14; i++){
	cout << arr[i] << " ";
      }
      cout << endl;
  
      t[index]--;
      
      int base = 0;
      int straight = 0;
      int triple = 0;
  
  while ((base + 2 <= 14)){     
      if (arr[base] == arr[base + 1] && arr[base+1] == arr[base+2]){
	//cout << "inside triple" << endl;
	triple++;
	base+=3;
      }
      
      else if ( (arr[base] + 1 == arr[base+1]) && (arr[base+1]+1 == arr[base+2])){
	//cout << "inside straight" <<endl;
	straight++;
	base+=3;
      }
      
      else if (arr[base] == arr[base+1]){
	//cout << "inside pair" << endl;
	  //pair++;
	  base+=2;
      } 
      
      if (straight + triple == 4)
	return true;
  }
  for (int i = 0; i < 14; i++){
    if (arr[i] == 0){
      arr[i] = index + 1;
      arr[i+1] = index+1;
    }
  }
  return false;
}

  

int main(){
  
  int n;
  cin >> n;
  

  for (int i = 0; i < n; i++){
    
      int base = 0;
      int straight = 0;
      int triple = 0;
      int pair = 0;
    
      int t[9];
      int n[9];
      for (int j = 0; j < 14; j++){
	t[j] = 0;
	n[j] = 0;
      }
      
      for (int j = 0; j < 14; j++){
	int temp;
	//cout << "temp: " << temp << endl;
	cin >> temp;
	t[temp-1]++;
	n[temp-1]++;
	//cout << "array " << t[j] << endl;
      }
      
      int arr[14];
      int index = 0;
      int j = 0;
      
      while (t[j] != 0 && j < 9){
	  arr[index] = j+1;
	  t[j]--;
	  //cout << "new value: " <<arr[index] << endl;
	  index++;
	  if (t[j] == 0){
	    j++;
	  }
      }
	  
	  
 /**while ((base + 2 <= 14) && pair <= 1){
    //cout << "inside while" << endl;
   // cout << arr[base] << endl << arr[base+1] << endl << arr[base+2] << endl;
      if (arr[base] == arr[base + 1] && arr[base+1] == arr[base+2]){
	//cout << "inside triple" << endl;
	triple++;
	base+=3;
      }
      
      else if ( (arr[base] + 1 == arr[base+1]) && (arr[base+1]+1 == arr[base+2])){
	//cout << "inside straight" <<endl;
	straight++;
	base+=3;
      }
      
      else if (arr[base] == arr[base+1]){
	//cout << "inside pair" << endl;
	  pair++;
	  base+=2;
      }
      else
	break;
 }*/
 
 //cout << "Triple: " << triple << endl << "Straight: " << straight << endl << "pair: " << pair << endl;
 
 bool val = false;
 for (int z = 0; z < 14; z++){
   if (n[z] >= 2){
     
     if (test(n, z, arr))
       val = true;
   }
 }
 
     
 
 if (val)
  cout << "Vulnerable" << endl;
 else
   cout << "Immune" << endl;

      
      
      
      
    
    
  }




  return 0;
}
