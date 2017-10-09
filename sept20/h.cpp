//int r;
#include <iostream>
#include <cmath>
using namespace std;


int hi(int r)
{
int divnum;
int num;
bool b;
bool bigb;
int k;
int i;
int remain;
int digit;
b=true;
bigb=false;
k=1;
while(bigb == false)
{
i=0;
num = pow(2.0,k); 

//cout << "in outer loop" << endl;
  while((i<=r)&&(b==true))
  {
      //divnum=pow(10,i);
      cout << "in loop " << endl;
	//remain =num%divnum;
	digit = num%10;
	//digit = remain/(divnum/10);
	num /= 10;
	  if(digit == 1|| digit ==2)
	  {
	    cout << "in first if" << endl;
	    i++;}
	  else
	    b=false;

      if((i==r)&&(b==false))
	{
	  cout << "in second if" <<endl;
	  bigb=true;
	  }
	
	k++;

   }
}
return k;
}

int main()
{
int a;
cin>>a;
cout<<hi(a)<<endl;
}
