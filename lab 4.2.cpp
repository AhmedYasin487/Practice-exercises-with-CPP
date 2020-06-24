#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	
	//Input
	cout<<"Lets find Arithmetic mean of 10 numbers but first you need to assign me 10 numbers \n";
	cout<<"\t What are you waiting for asign me hurry :  ";
	cin>>a;
	cout<<"\n";
	cout<<"next :  ";
	cin>>b;
	cout<<"\n";
	cout<<"next :  ";
	cin>>c;
	cout<<"\n";
	cout<<"next :  ";
	cin>>d;
	cout<<"\n";
	cout<<"next :  ";
	cin>>e;
	cout<<"\n";
	cout<<"next :  ";
	cin>>f;
	cout<<"\n";
	cout<<"next :  ";
	cin>>g;
	cout<<"\n";
	cout<<"next :  ";
	cin>>h;
	cout<<"\n";
	cout<<"next :  ";
	cin>>i;
	cout<<"\n";
	cout<<"Oky!Now last one :  ";
	cin>>j;cout<<"\n";
	
	//Calculations
	int sum,Arithmatic_Mean;
	sum=a+b+c+d+e+f+g+h+i+j;
	Arithmatic_Mean=sum/2;
	
	//Output for user
	cout<<"Arithmatic Mean  =   "<<Arithmatic_Mean;
	
	return 0;
	
}
