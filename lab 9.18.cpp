#include <iostream>
using namespace std;
int main ()
{
	float p,a=10,a1,n,r,y=2;
	//taking input from user
	cout <<"Original investment :";
	cin >>p;
	cout <<"number of years : ";
	cin >>n;
	
	//person data
	r=(5*p)/100;
	a1=p+r;
	cout <<"year\t\t\tAmount on deposit"<<endl;
	cout <<1<<"\t\t\t\t"<<a1<<endl;
	for (int i=1;i<a;i++)
	{
		n=(5*a1)/100;
		a1=a1+n;
		cout <<y<<"\t\t\t\t"<<a1<<endl;
		y++;
	}

	//making formula
	
	
	
	
	
	
}
