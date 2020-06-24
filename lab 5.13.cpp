#include <iostream>
using namespace std;
int main ()
{
	float petrol,distance;
	cout <<"How many liter petrol you want me to fill?  \n";
	cin >>petrol;
	distance=petrol*22.6;
	cout <<"you will travel "<<distance<<" km with "<<petrol<<" liter petrol";
	return 0;

}
