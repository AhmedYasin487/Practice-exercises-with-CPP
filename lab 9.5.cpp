#include <iostream>
using namespace std;
int main ()
{
	//taking input 
	
	int num,num2;
	cout <<"put the value of x ";
	cin >>num;
	cout <<"Put the limit power of n";
	cin >>num2;
	
	//sum formula
	float sum,an=1;
	//sum=num2*((num+an)/2);
	//cout <<"sum"<<sum<<endl;
	
	//print series
	//int an=1;
	//cout <<num<<" + ";
	//cout <<num*num;
	cout << "0";
	for (int i=1 ; i<=num2; i++)
	{
		cout <<" + ";
		an=an*num;
		cout <<an;
		sum = sum +an;
		//sum=num2*((num+an)/2);
	}
	cout <<endl;
	//sum=num2*((num+an)/2);
	cout <<"sum "<<sum<<endl;
	
}
