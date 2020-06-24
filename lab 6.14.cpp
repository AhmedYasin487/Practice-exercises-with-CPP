#include <iostream>
using namespace std;
int main ()
{
	int year,month,leap_year;
	cout<<"which year ? \n";
	cin >>year;
	cout <<"which month ? \n 1)January \n 2)February\n 3)March\n 4)April \n 5)May \n 6)June \n 7)July \n 8)Auguest \n 9)September \n 10)Octuber \n 11) November \n 12) December \n";
	cin>>month;
	
	if (month==2&&year%4==0)
	{
		cout <<"February "<<year<<" has 29 days."<<endl;
	} else if (month==1)
	{
		cout <<"January "<<year<<" has 31 days."<<endl;
	}else if (month==3)
	{
		cout <<"March "<<year<<" has 31 days."<<endl;
	}else if (month==4)
	{
		cout <<"April "<<year<<" has 30 days."<<endl;
	}else if (month==5)
	{
		cout <<"May "<<year<<" has 31 days."<<endl;
	}
	else if (month==6)
	{
		cout <<"June "<<year<<" has 30 days."<<endl;
	}else if (month==7)
	{
		cout <<"July "<<year<<" has 31 days."<<endl;
	}else if (month==8)
	{
		cout <<"Augest "<<year<<" has 31 days."<<endl;
	}else if (month==9)
	{
		cout <<"September "<<year<<"has 30 days."<<endl;
	}else if (month==10)
	{
		cout <<"Octuber "<<year<<" has 31 days."<<endl;
	}else if (month==11)
	{
		cout <<"November "<<year<<" has 30 days."<<endl;
	}else if (month==12)
	{
		cout <<"December "<<year<<" has 31 days."<<endl;
	}
return 0;
}
