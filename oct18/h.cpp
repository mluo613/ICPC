#include <iostream>
using namespace std;

class node(){
    public:
      int dl;
      int dr;
      char l;
      char r;
      int al;
      int ar;
      int arr[2];
      node(int DL, int DR, char L, char R, int AL, int AR, int A, int B){
	dl = DL;
	l = L;
	r = R;
	al = AL;
	ar = AR;
	arr[0] = A;
	arr[1] = B;
      }
}



int main(){
    int s;
    cin >> s;
  while (s != 0){
    node** mobile = new node*[s];
    int* weights = new int[s];
    for (int i = 0; i < s; i++){
      weights[i] = 1;
    }
    for (int i = 0; i  < s; i++){
	int a,b,c,d;
	char x,y;
	cin >> a;
	cin >> b;
	cin >> x;
	cin >> y;
	cin >> c;
	cin >> d;
	mobile[i] = new node(a,b,x,y,c,d, 0, 0);
    }
    int m, w;
    for (int i = 0; i < s; i++){
      if (mobile[i]->l == 'W' && mobile[i]->al == m-1){
	weights[i] = w;
	break;
      }
    }
    
    while (!equal())
  
  
  
  
return 0;
}
