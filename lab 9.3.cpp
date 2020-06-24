#include <iostream>
using namespace std;
int main()
{
	//taking upper limit frim the user
	int upper_limit;
	cout <<"put the upper limit : \n";
	cin >>upper_limit;
	
	//print series
	int i=2,num=0 ,sum=0;
	cout <<"1!";
	while (i<=upper_limit)
	{
		cout<<" + ";
		cout <<i<<"!\t";
		sum+=i;
		i++;
	}
	cout <<endl;
	cout << "Sum = "<<sum+1;	
}
