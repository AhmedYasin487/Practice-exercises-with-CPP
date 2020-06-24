#include <iostream>
using namespace std;
int main()
{
	float height,weight,length,volume;
	cout<<"What is the height of the cubic object?  ";
	cin>>height;
	cout<<"What is the weight of the cubic object?  ";
	cin>>weight;
	cout<<"What is the height of the cubic object?  ";
	cin>>length;
	volume=height*weight*length;
	cout<<"The volume of the given cubic object is :"<<volume;
	return 0;
}
