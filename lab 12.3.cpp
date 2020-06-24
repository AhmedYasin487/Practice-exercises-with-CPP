#include <iostream>
using namespace std;
int mean()
{
	float sum=0,median=0;
	int x[15];

	for (int i=1;i<=15;i++)
	{
			cout <<"Put values of array : ";

		cin >>x[i];
		sum+=x[i];
		median =x[8];
	}
	cout <<"Mean = "<<sum/15<<endl;
	cout <<"median"<<median;
}

int main()
{
	mean();
}
