#include <iostream>
using namespace std ;
int main ()
{
	int n,a1=1,a2=1;
	float sum,an;
	
	//print series
	cout <<"0";
	for (int i=1 ;i<=19;i++)
	{
		cout <<" + ";
		cout <<a1 <<"/"<<a2;
		a1=a1+1;
		a2=a2+2;
	}
	an=a1/a2;
	cout<<endl<<an;
	
	//series formula
	sum = 19*((1+an)/2);
	cout << endl<<"Sum ="<<sum;
}
