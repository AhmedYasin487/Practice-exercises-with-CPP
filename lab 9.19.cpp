#include <iostream>
using namespace std;
int main ()
{
	//displaying options
	cout<<"\tATM"<<endl;
	cout << "1. Cash Withdrawal "<<endl<<"2. Balance Transfer "<<endl<<"3. Balance Inquiry "<<endl;
	//taking input 
	int ans;
	cin >>ans;
	//current balance;
	float current;
	current =10000;
	//operation 1 perform 
	if (ans==1)
	{
		int amount;
		cout<<"Enter the amount to withdraw :\n";
 		cin >>amount;
 		if (amount <current)
 		{
 			cout<<"Your new balance is :"<<current-amount<<endl;
		} else {
			cout<<"Insufficient fund!";
		}
 		
	}
	//operation 2 perform
	if (ans==2)
	{
		int trans,recip;
		cout <<"Enter the amount to transfer :\n";
		cin >>trans;
		cout <<"Enter the recipient's account :\n";
		cin>>recip;
		cout<<"Your new balance is :"<<current-trans<<endl;
	}
	//operation 3 perform
	if (ans==3)
	{
		cout<<"Your current balance is :"<<current<<endl;
	} 
	if (ans >3)
	{
		cout <<"Error! its not option here. \n";
	}
	//again 
	char ans1;
	cout <<"Did you want to do another transaction ? (y/n)";
	cin >>ans1;
	if (ans1=='y')
	{
		for(int i=1;i<=1;)
		{
			for (int j=1;j<=1;j++)
			{
			//displaying options
	cout<<"\tATM"<<endl;
	cout << "1. Cash Withdrawal "<<endl<<"2. Balance Transfer "<<endl<<"3. Balance Inquiry "<<endl;
	//taking input 
	int ans;
	cin >>ans;
	//current balance;
	float current;
	current =10000;
	//operation 1 perform 
	if (ans==1)
	{
		int amount;
		cout<<"Enter the amount to withdraw :\n";
 		cin >>amount;
 		if (amount <current)
 		{
 			cout<<"Your new balance is :"<<current-amount<<endl;
		} else {
			cout<<"Insufficient fund!";
		}
 		
	}
	//operation 2 perform
	if (ans==2)
	{
		int trans,recip;
		cout <<"Enter the amount to transfer :\n";
		cin >>trans;
		cout <<"Enter the recipient's account :\n";
		cin>>recip;
		cout<<"Your new balance is :"<<current-trans<<endl;
	}
	//operation 3 perform
	if (ans==3)
	{
		cout<<"Your current balance is :"<<current<<endl;
	}	
			}
			cout <<"Did you want to do another transaction ? (y/n)";
	 		cin >>ans1;
	 		if (ans1=='n')
	 		{
	 			i++;
	 			cout <<"Thanks for coming !";
			}
		}
	} else if (ans >3){
		cout <<"Its not an option !";
	}
	
}
