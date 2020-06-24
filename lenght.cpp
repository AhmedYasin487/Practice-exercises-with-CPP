#include <iostream>
using namespace std;
int main()
{
	long double num,j=0;
	cout <<"Put any number :";
	cin>>num;
	for (long double i=1;i<=num;)
	{
		if (num/i>=0)
		{
			j +=1;
		}
		cout <<i<<endl;
		
		i *=10;
		
	}
	cout <<j;
}
