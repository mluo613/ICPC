#include <iostream>
#include <string.h>
using namespace std;


int main(){
  
  int n;
  cin >> n;
  int line;
  string retVal = "";
  string halfVal = "";
  string newRetVal = "";
  string temp;
  bool k;
  bool first;
  line=0;
  for (int i = 0; i < n;){
      getline(cin, temp);
      k=true;
      first = true;
    if (temp == "END OF CASE"){
      line = 0;
      i++;
      continue;
    }
    //const char* temp = s.c_str();
    
    while(k)
    {
    if(!first)
      getline(cin, temp);
    int index = -1;
    first=false;
    for (int j = 0; j < temp.size(); j++){
	if (temp[j] == ';')
	  index = j;
	break;
    }
    if (index == -1){
      retVal += temp;
      line++;
    }
    
    if(index==0)
    {
      retVal +=temp[0];
      newRetVal = "";
    } 
    else if(index == temp.size()-1)
    {
	retVal += temp.substr(0);
	newRetVal = "";
    }
    else{
      retVal += temp.substr(0, index+1);
      halfVal+=temp.substr(index+1);
      newRetVal = halfVal;
    }
    
  }
     cout << line << ": " << retVal << endl;
        retVal = newRetVal;
}
    
return 0;

    }

