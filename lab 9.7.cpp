#include <iostream>
using namespace std;
int main ()
{
	//taking input from user
	int num;
	cout <<"put number : ";
	cin >>num;
	
	//arm strong numbers
  	int n1=0,n2=0,n3=0,m1=0,m2=0,m3=0;
  	m1=num%10;
  	n1=num/10;
  	m2=n1%10;
  	n2=n1/10;
  	m3=n2%10;
  	n3=n2/10;
  	m1=m1*m1*m1;
  	m2=m2*m2*m2;
  	m3=m3*m3*m3;
  	if(num==m1+m2+m3)
  	{
  		cout <<"arm strong";
	  } else {
	  	cout <<"no arm strong";
	  }
    
		
}
