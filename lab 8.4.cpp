#include <iostream>
using namespace std;
int main ()
{
	int num,sum=0,m;
	cout <<"Put the three digit number :\n ";
	cin  >>num;
	while (num>0)
	{
		m=num%10;
		sum= sum+m;
		num=num/10;
	}
	cout << sum;
}
