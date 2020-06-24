#include <iostream>
using namespace std;
int main()
{
	int limit,num,sum=0,i=1;
	cout<<"how many numbers you want to add :";
	cin>>limit;
	while (i<=limit)
	{
		cout<<"put number \n";
		cin >>num;
		sum +=num;
		i++;
	}
	cout <<sum;
}
