#include <iostream>
using namespace std;
int main ()
{
	float a,b,c;
	cout <<"Put first side of the triangle : \n";
	cin >>a;
	cout <<"Put second side of the triangle : \n";
	cin >>b;
	cout <<"Put third side of the triangle : \n";
	cin >>c;
	if (a==b&&b==c&&c==a)
	{
			cout <<" Triangle is valid \n its an Equilateral triangle ";
			
	} else if (a==90 && b==c || b==90 && a==c || c==90 && a==b)
		{
			if (a+b+c==180)
			{
				cout <<" Trinagle is valid \n its an Isosceles triangle ";
			} else 
			{
				cout<<"Invalid triangle ";
		    }
	} else if ( a==90 && a+b+c==180 || b==90&&a+b+c==180 || c==90&&a+b+c==180)
	{
		cout<<" Triangle is valid \n its a Right angle triangle ";
	} else if (a+b+c !=180)
	{
		cout <<"Invalid triangle";
	} else 
	{
		cout <<"Invalid triangle";
	}
	return 0;
	
}
