#include <iostream>
using namespace std;
int main ()
{
	int sum,range;
	cout <<"put the range ";
	cin >>range;
	int i=0;
	while (i<=range)
	{
		if (i%2==0)
		{
			cout <<i<<endl;
			sum=sum+i;
		}
	i++;
	}
	cout <<"Sum = "<<sum;
	return 0;
}
