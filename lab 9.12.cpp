#include <iostream>
using namespace std;
int main ()
{
	float liters,km,consum;
	cout <<"Enter the liters used \n";
	cin >>liters;
	cout <<"Enter the kilometers driven \n";
	cin >>km;
	consum=liters/km;
	cout <<"The liters / 100km for this tank was : "<<consum;
	
}
