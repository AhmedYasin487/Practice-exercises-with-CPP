#include <iostream>
using namespace std;
int main()
{
	long double age,months,week,days,hours,mints;
	cout <<"Put your age in year : ";
	cin>>age;
	
	//In months
	cout <<"\n\n";
	cout<<"***   MONTHS   ***\n";
	months=age*12;
	cout<<"\t"<<months<<"\n";
	
	//IN WEEKS
	cout <<"\n\n";
	cout<<"***   WEEKS   *** \n";
	week=months*age*12;
	cout<<"\t"<<week<<"\n";
	
	//IN DAYS
	cout <<"\n\n";
	cout<<"***   DAYS   *** \n";
	days=week*months*age*12;
	cout<<"\t"<<days<<"\n";
	
	///IN HOURS
	cout <<"\n\n";
	cout<<"***   HOURS   *** \n";
	hours=days*week*months*age*12;
	cout<<"\t"<<hours<<"\n";
	
	//IN MINTS
	cout <<"\n\n";
	cout<<"***   MINUTES   *** \n";
	mints=hours*days*week*months*age*12;
	cout<<"\t"<<mints<<"\n";
	return 0;
	
}
