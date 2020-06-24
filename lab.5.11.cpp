#include <iostream>
using namespace std ;
int main ()
{
	float distance,speed,fuel,time,fuel_required;
	cout<<"What is the total distance between 2 cities?  \n";
	cin >>distance;
	cout<<"What is the speed of your vehicle?    \n";
	cin>>speed;
	cout<<"How much distance covered in one liter?  \n";
	cin >>fuel;
	time =distance/speed;
	cout <<"The time taken by the vehicle is :"<<time<<endl;
	fuel_required=distance/fuel;
	cout <<"you need atleast "<<fuel_required<<"liter fuel to reach the destination";
return 0;	
	
}
