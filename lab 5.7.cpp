#include <iostream>
using namespace std;
int main ()
{
	//Divide by 5, then multiply by 9, then add 32
	float C,F,a,b;
	cout<<"What is temperature in celcius ?  ";
	cin >>C;
	F=C/5*9+32;
	/*a=C/5;
	b=a*9;
	F=b+32;*/
	cout<<F;
	return 0;
}
