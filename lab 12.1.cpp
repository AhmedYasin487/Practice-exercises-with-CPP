#include <iostream>
using namespace std;
int findeven()
{
	int num1=0;
	cout<<"Put 15 array values :";
	for (int i=1;i<=15;i++)
	{
		int x[15];
		cin>>x[i];
	if (x[i]%2==0)
	{
		num1+=1;	
	}
	}
	cout <<endl<<"Even number in array = "<<num1;
}
int findodd()
{
	int num2=0;
	for (int i=1;i<=15;i++)
	{
		int x[15];
	//	cin>>x[i];
	if (x[i]%2!=0)
	{
		num2+=1;
	}
	}
	cout <<endl<<"Odd number in array = "<<num2;	
}
int findprime()
{
	int num3=0;
	for (int i=1;i<=15;i++)
	{
		int x[15];
	//	cin>>x[i];
	if (x[i]==1||x[i]==2 ||x[i]==3||x[i]==5||x[i]==7||x[i]==11)
	{
		num3+=1;	
	} else if (x[i]%2==0&&x[i]%3==0&&x[i]%5==0&&x[i]%7==0&&x[i]%11==0)
	{
		num3+=1;
	}
	}
	cout <<endl<<"Prime number in array = "<<num3;
}
int main ()
{
	findeven();
	findodd();
	findprime();

}
