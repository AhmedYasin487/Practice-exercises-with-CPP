#include <iostream>
using namespace std;
float average (float=0,float=0);
int main ()
{
	
	average ();
	
	
}
float average (float mark1,float mark2)
{
	cout<<"Marks in frist subject :";
	cin>>mark1;
	cout<<"Marks in second subject :";
	cin>>mark2;
	cout<<"Average marks ="<<(mark1+mark2)/2;
}

