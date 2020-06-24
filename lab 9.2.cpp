#include <iostream>
using namespace std ;
int main ()
{
	//taking upper limit frim the user
	int upper_limit;
	cout <<"put the upper limit : \n";
	cin >>upper_limit;
	
	//printing series
	int i=1,num=1;
	cout<<"1";
	while (i<=upper_limit)
	{
		cout <<"  ";
		num *=3;
		cout <<num;
		i++;
	}
	cout <<".....n";
}
