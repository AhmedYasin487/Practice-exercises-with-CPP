#include <iostream>
using namespace std;
int main ()
{
	double mint,hour,day,week,month,year;
	cout <<"put time in mints";
	cin>>mint;
	hour=mint/60;
	cout<<"hour "<<hour<<endl;
	day=mint/(60*24);
	cout<<"days"<<day<<endl;
	week=mint/(60*24*7);
	cout<<"week"<<week<<endl;
	month=mint/(60*24*7*30);
	cout<<"month"<<month<<endl;
	year=mint/(60*24*7*30*12);
	cout<<"year"<<year<<endl;
	
}
