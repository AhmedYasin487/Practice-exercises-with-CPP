#include <iostream>
using namespace std;
int num;
int again()
{
	for (int j=1;j<=1;)
	{
	char ans;
	cout <<"want to test it again ?(y/n)";
	cin >>ans;
	if (ans=='y')
	{
			//taking input from user
 	int num;
 	int num1=0;
 	cout <<"Put integer :";
 	cin >>num;
 	if (int i=1)
 	{
 		 
 	for (int i=1;i<=num;i++)
 	{
 		if (num%i==0)
 		{
 			num1+=i;
 			if (num1==num)
 			{
 				cout <<"its perfect num! \n";
 				break;
			}
 		} 
	}
	} 
	if (num1!=num) {
		cout<<"not perfect \n";
	}
		
		 
	}
	 else if (ans =='n')
	{
		break;
	} 
		
	}
}

int main ()
{
	//taking input from user
 	int num;
 	int num1=0;
 	cout <<"Put integer :";
 	cin >>num;
 	if (int i=1)
 	{
 		 
 	for (int i=1;i<=num;i++)
 	{
 		if (num%i==0)
 		{
 			num1+=i;
 			if (num1==num)
 			{
 				cout <<"its perfect num! \n";
 				break;
			}
 		} 
	}
	} 
	if (num1!=num) {
		cout<<"not perfect \n";
	}
	again();
 	
 
}

