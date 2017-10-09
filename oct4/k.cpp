#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cstring>
using namespace std;

void calculate(vector<int> &a, int num, string s);

int main(){
 
    while (true){
        int a,  b, c;
        cin >> a;
	if (a == 0)
	  break;
        cin >> b;
        cin >> c;
        
	//cout << "A: " << a << " B: " << b << " C: " << c <<endl;
	
        vector<int> first;
        vector<int> second;
        vector<int> third;
   
        string s = "";

        calculate(first, a, s);
        calculate(second, b, s);
        calculate(third, c, s);

        int count = 0;

	//cout << first.size() << endl;
	
        for (int i = 0; i < first.size(); i++){
	  for (int j = 0; j < second.size(); j++){
	    for (int k = 0; k < third.size(); k++){
		    //cout << "inside loops" << endl;
                    if (first[i] + second[j] == third[k])
                        count++;
                    if (first[i] - second[j] == third[k])
                        count++;
                    if (first[i] * second[j] == third[k])
                        count++;
                    if (second[j] != 0)
		      if (first[i] / second[j] == third[k])
                        count++;
                } //end k for
            }//end j for
        }//end i for

        if (count == 1){
            cout << count << " solution for ";
        }
        else{
            cout << count << " solutions for ";
        }
        cout << a << " " << b << " " << c << " " << endl;
    }//end outer while

  return 0;
}


void calculate(vector<int> &a, int num, string s){
    const char* temp = s.c_str();
    //cout << "running:" << " " << num << " " << s << endl;
    if (s.length() > 3)
        return;
    if (num == 5 && s != ""){
      	if (s.length() > 1 && temp[0] == '0')
	  return;
      a.push_back(atoi(s.c_str())*-1);
      //cout << "adding: " << a[a.size()-1] << endl;
        return;
    }
    if (num == 0){
	if (s.length() > 1 && temp[0] == '0')
	  return;
	//cout << "adding: " << s << endl;
	a.push_back(atoi(s.c_str()));
        return;
    }
    if (num < 0){
        return;
    }
      if (s.length() != 2)
    calculate(a, num - 30, "0" + s);
    calculate(a, num - 30, "6" + s);
    calculate(a, num - 30, "9" + s);
    calculate(a, num - 35, "8" + s);
    calculate(a, num - 25, "2" + s);
    calculate(a, num - 25, "3" + s);
    calculate(a, num - 25, "5" + s);
    calculate(a, num - 20, "4" + s);
    calculate(a, num - 15, "7" + s);
    calculate(a, num - 10, "1" + s);
}
