#include <iostream>
using namespace std ;
int main ()
{

	//shape A
	cout <<"SHAPE A\n"<<endl;
	for (int i=1;i<=9;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
	//shape B
	
	cout <<"SHAPE B\n"<<endl;
	for (int i=9;i>=1;i--)
	{
		for (int j=1;j<=i;j++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
	
	//shape C
	cout <<endl<<"SHAPE C"<<endl;
	for (int i=1;i<=9;i++)
	{
		for (int z=1;z<=i;z++)
		{
			cout <<" ";
		}
		for (int j=9;j>=i;j--)
		{
			cout <<"*";
		}
		cout<<endl;
	}
	//shape D
	cout <<endl<<"SHAPE D"<<endl;
	
	for (int i=1;i<=9;)
	{
		for (int j=9;j>=i;j--)
		{
			cout <<" ";
		}
		for (int z=1;z<=i;z++)
		{
			cout <<"*";
		}
		i++;
		cout <<endl<<"";
	}
	
	
}
