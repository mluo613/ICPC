#include <iostream>
using namespace std;


int lcm(int a, int b);
int gcf(int a, int b);

int main(){

int n;
cin >> n;
for (int i = 0; i < n; i++){ //iterates the number of samples
  int a, b;
  cin >> a;
  cin >> b;
  cout << i + 1 << " " << lcm(a,b) << " " << gcf(a,b) << endl;

}



return 0;
}

int lcm(int a, int b){
  int max = 0;
  int min = 0;
  if (a > b){
    max = a;
    min = b;
  }
  else{
    max = b;
    min = a;
  }
  int i = 2;
  int test = max;
  while (max % min != 0){
    max = test * i;
    i++;
  }
  return max;
}

int gcf(int a, int b){
  int max = 0;
  int min = 0;
  if (a > b) {
    max = a;
    min = b;
  }
  else{
    max = b;
    min = a;
  }
  int x = min;
  while (x > 0){
    if (max % x == 0 && min % x == 0)
      return x;
  x--;
  }
}
