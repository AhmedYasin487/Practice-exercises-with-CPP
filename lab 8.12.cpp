#include <iostream>
using namespace std;
int main ()
{
	//taking upper limit
	int upper_limit;
	cout<<"Put the upper limit of the series ";
	cin >>upper_limit;
	
	//print series
	int i=1,num=2,sum=0;
	cout <<"1 + 2";
	while (i<upper_limit)
	{
		cout<<" + ";
		num*=2;
		cout<<num;
		sum+=num;
	i++;
	}
	cout<<"\n\n";
	cout <<"Sum = "<<sum+3;
}
