#include <iostream>
using namespace std;
int sum()
{
	int sum=0;
	
		int x[10];
	for(int i=1;i<=10;i++)
	{
		cout <<"Put ten integer :";
	
		cin>>x[i];
		sum= sum + x[i];
	}
	cout <<"Sum = "<<sum;
}

int max()
{
	int max=0;
	int x[10];

	for (int i=1;i<=15;i++)
	{
		if (x[i]<x[i+1])
		{
			max=x[i+i];
		}
	}
	cout <<"\nMaximum = "<<max;
}


int main()
{
	sum();
//	max();
}
