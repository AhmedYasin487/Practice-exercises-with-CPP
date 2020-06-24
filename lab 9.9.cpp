#include <iostream>
using namespace std;
int main ()
{
	//print series 
	float j=2,div,sum=0;
	cout <<0;
	int i=1;
	for (;i<=49;i++)
	{
		cout <<" + ";
		cout <<i<<"/"<<j ;
		div =i/j;
		sum=sum+div;
		j++;
	}
	cout <<endl<<sum;
	
}
