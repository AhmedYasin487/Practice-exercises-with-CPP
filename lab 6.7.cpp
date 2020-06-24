#include <iostream>
using namespace std;
int main ()
{
	int year,leap_year;
	cout <<"which year : ";
	cin>>year;
	if (year%4==0)
	{
		cout <<"leap year ";
	}
	else {
		cout <<"not leap year";
	}
}
