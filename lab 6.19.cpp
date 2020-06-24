#include <iostream>
using namespace std;
int main ()
{
	double val1,val2,sum,divide,sub,mul;
	char function;
	cout <<".________________. \n";
	cout <<"|________________| \n";
	cout <<"|_______________0| \n";
	cout <<"| 1 | 2 | 3 | +  | \n";
	cout <<"| 4 | 5 | 6 | -  | \n";
	cout <<"| 7 | 8 | 9 | X  | \n";
	cout <<"| = | 0 | . | /  | \n";
	cout <<"|___|___|___|____| \n";
	cout << "Assign me first value = ";
	cin >>val1;
	cout <<"Assign me function = ";
	cin >>function;
	cout <<"Assign me second value = ";
	cin >>val2;
	int jadu =function;
	if (jadu==43)
	{
		cout << "Addition = "<<val1+val1<<endl;
	} else if (jadu==45)
	{
		cout<< "Subtraction = "<<val1-val2<<endl;
    } else if (jadu==42)
	{
	
		cout<< "Multiplication = "<<val1*val2<<endl;
	} else if (jadu==47)
	{
		cout<< "Division = "<<val1/val2<<endl;
	}
	else
	{
		cout <<"Assign me function and than second value";
	}
	return 0;
}
