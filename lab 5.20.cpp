#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,determinent,sq,ac,minus;
	cout <<"Put the value of three variables : \n";
	cin >>a;
	cin >>b;
	cin >>c;
	sq=b*b;
	ac=4*a*c;
	minus=sq-ac;
	determinent=sqrt(minus);
	cout <<determinent;
	
}
