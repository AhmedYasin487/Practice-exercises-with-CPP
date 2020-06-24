#include <iostream>
using namespace std;
int main ()
{
	int num1,num2,num3;
	cout <<"put three numbers to find which number is greater \n";
	cin >>num1;
	cin >>num2;
	cin >>num3;
	if (num1>num2&&num1>num3)
	{
		cout <<num1<<"is greater.";
	}
	else if (num2>num1&&num2>num3)
	{
		cout<<num2<<"is greater.";
	}
	else if(num1==num2|| num2==num1)
	{
		cout <<"number one and number two is equal "<<num1 <<" = "<<num2<<endl;
	}
	else if(num1==num3|| num3==num1)
	{
		cout <<"number one and number three is equal"<<num1<<" = "<<num3<<endl;
	}
	else if(num1==num2&&num3>num1)
	{
		cout <<"number one and number two is equal and number three is greater"<<num1 <<" = "<<num2<<"greater "<<num3<<endl;
	}
	else if(num1==num3&& num2>num1)
	{
		cout <<"number one and number three is equal and number two is greater"<<num1 <<" = "<<num3<<"greater "<<num2<<endl;
	}
	else if(num1==num3&& num2<num1)
	{
		cout <<"number one and number three is equal and number two is smaller"<<num1 <<" = "<<num3<<"smaller "<<num3<<endl;
	}
	else if(num1==num2&& num3<num1)
	{
		cout <<"number one and number two is equal and number two is smaller"<<num1 <<" = "<<num2<<"smaller "<<num2<<endl;
	}
	else{
		cout <<"all equal";
	}
	return 0;
}
