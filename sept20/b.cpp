#include <iostream>
#include <string>
#include <cstring>
#include <unordered_map>
using namespace std;

int main(){
  string temp;
  int n;
  getline(cin, temp);
  n = stoi(temp);
  for (int i = 0; i < n; i++){
    cin.clear();
    string one, two;
    getline(cin, one);
    getline(cin, two);
    const char* s1 = one.c_str();
    const char* s2 = two.c_str();
    unordered_map<char,char> myMap;
    
    for (int j = 0; j < 26; j++){
      myMap.insert(make_pair(char(j + 65),s2[j]));
    }
    cout << i + 1<< " ";
    for (int j = 0; j < strlen(s1); j++){
      if (s1[j] == ' ')
	cout << " ";
      else{
	auto search = myMap.find(s1[j]);
	if (search!= myMap.end())
	  cout << search->second;
      }
    }
    cout << endl;
    

  }
return 0;
}
