#include <iostream>
using namespace std;
int main ()
{
	char grade ;
	cout <<"Enter your grade :";
	cin >>grade;
	cout <<"\t   COMSATS University \t\t\t FAST University \n\n";
	switch (grade)
	{
		case 'A':
			cout <<"\tA ->  marks (100 to 90) \t\t  A ->  marks (100 to 75) ";
			break;
		case 'B':
			cout <<"\tB ->  marks (89 to 75) \t\t  A ->  marks (74 to 65) ";
			break;
		case 'C':
			cout <<"\tC ->  marks (74 to 65) \t\t  A ->  marks (64 to 60) ";
			break;
		case 'D':
			cout <<"\tD ->  marks (64 to 50) \t\t  A ->  marks (59 to 50) ";
			break;
		case 'F':
			cout <<"\tF ->  marks (49 to 0) \t\t  A ->  marks (49 to 0) ";
			break;
		default :
			cout <<"Invalid input or make sure you input is in uppercase ";
	}
}
