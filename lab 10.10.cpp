#include <iostream>
using namespace std;
int main ()
{
	int i=1;
	
	for (int a=1;a<=19;a++)
	{
 		for (int b=19;b>=a;b--)
		{
			cout <<" ";
		}
		for (int c=1;c<a;c++)
		{
			cout <<"*";
		}
		for (int d=2;d<a;d++)
		{
			cout <<"*";
		} 
		cout <<endl;
	}
	
	for (int e=18;e>=1;e--)
	{
		i++;
		for (int f=0;f<i;f++)
		{
			cout <<" ";
		}
		for (int g=1;g<e;g++)
		{
			cout <<"*";
		}
		for (int h=2;h<e;h++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
}
