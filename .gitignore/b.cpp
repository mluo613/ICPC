#include <iostream>
#include <vector>
using namespace std;

int main(){

int n = -1;

vector<int> players;

while (n != 0){
  
  cout << "starting while" << endl;
  cin >> n;
  cout << "n: " << n << endl;
  int t = 0;
  cin >> t;
  cout << "updated t " << t << endl;
  //vector<int> players;
  
  for (int i = 0; i < n; i++){
    players.resize(n);
    players[i] = 0;
    cout << players[0] << endl;
  }
  
  cout << "hello1" << endl;
  bool cont = true;
  int itr = 0;
  cout << "hello " <<endl;
  while (cont){
    int del =(t + itr)%n;
   
   /* for (int i = 0; i < t + itr; i++){
      players[(i+itr)%n]++;
      cout << players[(i+itr)%n)]
	*/
    
    for (int i = 0; i < t; itr++){
      i++;
      players[itr%n]++;
      cout << "itr: " << itr << endl << "player number " << itr%n + 1 <<endl;
      cout << players[itr%n] << " ";
    } //end for*/
    itr = t-2;
    cout << endl;
    players.erase(players.begin() + del - 1);
    n--;
    cout << "updated n " << n << endl;
    
    for (int i = 0; i < players.size()-1; i++){
      
      if(players[i] != players[i+1]){
	cout << "inside if" << endl;
	break;
      } //end if
      
      else if (i == players.size()- 2){
	 cout << "inside else if"<< endl;
	 cont = false;
      }//end else if
      
    } //end for
    
 } //end inner while
 
cout << n << " " << players[0];
cout << "outside while" << endl;    

players.clear();
}

return 0;
}
