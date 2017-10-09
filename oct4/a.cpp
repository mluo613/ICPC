#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    for (int i = 0; i  < n; i++){
      int t;
      cin >> t;
      string * array = new string[t];
      for (int j = 0; j < t; j++){
	cin >> array[j];
      }
      int s;
      cin >> s;
      vector<string> line;
      vector<string> names;
      string test;
      for (int j = 0; j < s; j++){
	 cin >> test;
	 line.push_back(test);
      }
      for (int j = 0; j < t; j++){
	for (int k = 0; k < line.size(); k++){
	  if (array[j] == line[k]){
	    names.push_back("present");
	  }
	  else{
	    names.push_back("absent");
	  }
	}
      }
      
      cout << "Test set " << n << ":" << endl;
      int index = 0;
      for (int j = 0; j < t; j++){
	cout << array[0] << " is " << names[index] << endl;
	index++;
      }    
	
      
      
      
    }

  return 0;
}
