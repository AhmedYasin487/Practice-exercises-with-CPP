#include <iostream>
using namespace std;
int main ()
{
	for (int i=2;i<=6;i++)
	{
	   	cout <<i;
		for (int c=2;c<=6;c++)
		{ 
		 	//cout <<j;
			cout <<"\t"<<(c*i);
		}
		cout <<  "\n";
	}
}
