#include <iostream>
using namespace std;
int main ()
{
	double velocity ,distance,time,acceleration;
	cout <<"What is the distance : \n";
	cin>>distance;
	cout<<"What is time : \n";
	cin>>time;
	velocity=distance/time;
	cout <<"Velocity = "<<velocity<<endl;
	acceleration=velocity/time;
	cout <<"Acceleration = "<<acceleration<<endl;
	return 0;
}
