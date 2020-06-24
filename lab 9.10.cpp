#include <iostream>
using namespace std;
int main ()
{
	//taking input frim the user
	int num;
	cout <<"put any positive number \n";
	cin>>num;
	
	//odd logic
	if (num%2!=0){
		cout <<"its odd number \n";
	} else 
	{
	 //	cout <<"Its not odd number \n";
	}
	
	//even logic
	if (num%2==0)
	{
		cout <<"its even number \n";
	} else {
	//	cout <<"its not even number \n";
	}
	
	// prime logic
	if (num==2||num==3||num==5||num==7||num==11)
	{
		cout <<"its prime number \n";
	} else if (num%2!=0&&num%3!=0&&num%5!=0&&num%7!=0&&num%11!=0){
	 	cout <<"its prime number \n";
	} else {
	//	cout <<"its not prime number";
	}
	
	
	
	//again test
	char ans;
	cout <<"\n want me to test it again ? (y/n)";
	cin >>ans;
	if (ans == 'y')
	{
		for (int i=1; i<=1 ;)
		{
			cout <<"put integer";
			cin >> num;
			 	for (int j=1;j<=1 ;j++){
			 		if (num%2!=0){
			cout <<"its odd number \n";
	} else 
	{
	 //	cout <<"Its not odd number \n";
	}
	
	//even logic
	if (num%2==0)
	{
		cout <<"its even number \n";
	} else {
	//	cout <<"its not even number \n";
	}
	
	// prime logic
	if (num==2||num==3||num==5||num==7||num==11)
	{
		cout <<"its prime number \n";
	} else if (num%2!=0&&num%3!=0&&num%5!=0&&num%7!=0&&num%11!=0){
	 	cout <<"its prime number \n";
	} else {
	//	cout <<"its not prime number";
	}
	}
	cout <<"\n want me to test it again ? (y/n)";
	cin >>ans;
	if (ans=='n')
	{
		i++;
	}
     	}
	
	}
	cout <<"thanks for testing !";
	
	
}
