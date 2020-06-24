#include <iostream>
using namespace std;
int a ()
{
	long double sum=0;
	cout <<"Put the value of n :";
	long double n ,n2=2;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		n2 *=n2 ;
		n2 +=1;
		cout <<" + "<<n2;
		sum=sum+n2;
	}
	 cout <<"\nSum : "<<sum;
}

int main()
{
	a();
}
