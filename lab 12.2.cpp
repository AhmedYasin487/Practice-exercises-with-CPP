#include <iostream>
//#include <sprintf>
using namespace std;
int amount;
 													//cash withdraw
int cashwithdraw()
{
	//int amount ;
	cout <<"Enter the amount of withdraw : ";
	cin>>amount;
	if (amount <=25000&&amount>=1)
	{
		cout<<"Your new balance is : "<<25000-amount<<"Rs.\n";
	} else if (amount >25000)	{
		cout <<"Insufficient fund \n";
	} else if (amount <=0) {
		cout <<"Error ! You are putting negative value \n";
	}
}
													//balance transfer
int lenght()
{
	long double account;
	long double num,j=0;
	cout <<"Enter the recipient account :";
	cin>>account;
	if (account >=81e12&&account <=81999999999999)
	{
	for (long double i=1;i<=num;)
	{
		if (num/i>=0)
		{
			j +=1;
		}
		
		i *=10;
	}
	cout <<j;
	}	else {
			cout <<"Invalid account.";
		}
}

int balancetransfer()
{
	cout <<"Enter the amount to transfer :";
	cin>>amount;
	long double account;
	long double num,j=0;
	cout <<"Enter the recipient account :";
	cin>>account;

	if (account >=81000000000000&&account <=81999999999999)
		{
			cout <<"Your new balance is :"<<25000-amount<<"Rs.";
		}else {
			cout <<"Invalid account.";
		}
}
														//Balance inquiry
int balanceinquiry()
{
	cout <<"\nYour account number is : 81-4654-8000-1455\n";
	cout <<"Details \nAccount active from Pakistan \nYou in lahore\nYour current balance is :"<<25000-amount<<"Rs. \n";
} 
														//again test
int again()
{
	int option;
	for (int i=1;i<=1;)
	{
		cout <<"\nWant another transection ? (y/n)";
		char ans;
		cin>>ans;
		if (ans=='y')
		{
			cout <<"\t ATM \n1.\t Cash Withdraw \n2.\t Balance Transfer \n3.\t Balance Inquiry\nEnter Your selection ";
	cin>>option;
	switch (option)
	{
		case 1:
			cashwithdraw();
			break;
		case 2:
			balancetransfer();
			break;
		case 3:
			balanceinquiry();
			break;
		default :
			cout <<"Invalid input ";
		
	}
			
		} else if (ans=='n')
		{
		cout <<"thanks for coming !";
		i++;}
		
	}
}
													//main function

int main ()
{
	int option;
	cout <<"\t ATM \n1.\t Cash Withdraw \n2.\t Balance Transfer \n3.\t Balance Inquiry\nEnter Your selection ";
	cin>>option;
	switch (option)
	{
		case 1:
			cashwithdraw();
			break;
		case 2:
			balancetransfer();
			break;
		case 3:
			balanceinquiry();
			break;
		default :
			cout <<"Invalid input ";
		
	}
	again();
	
}


