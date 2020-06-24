#include <iostream>
using namespace std;;
int main ()
{
	int day;
	cout <<"Enter the day of call : \n";
	cin >>day;
	//one condition
	if (day <=5&&day >=1)
	{
		int time ;
		cout <<"Enter the time your call started in 24-hr notation :\n";
		cin >>time;
		if (time >= 800 &&time <=1800)
		{
			int mint ;
			cout <<"Enter the length of your call in mint :\n";
			cin >>mint;
			cout <<"the cost of your call is Rs."<<mint*24<<endl;
		}
	
	//second condition
		int time1 ;
		if (time >=0000&&time<800||time >1800&&time<=2400)
		{
		
			int mint ;
			cout <<"Enter the length of your call in mint :\n";
			cin >>mint ;
			cout <<"the cost of your call is Rs."<<mint*15<<endl;
	}
 	}
	//third condition
	if (day >5&&day <=7)
	{
		int time ;
		cout <<"Enter the time your call started in 24-hr notation :\n";
		cin >>time;
			int mint ;
			cout <<"Enter the length of your call in mint :\n";
			cin >>mint;
			cout <<"the cost of your call is Rs."<<mint*9<<endl;
	} else if (day<1||day>7){
		cout <<"BAD_INPUT";
	}
	//again
	int ans;
	cout <<"Do you want to do another calculation ? (1 for yes and 0 to quit) \n";
	cin>>ans;
	if (ans==1)
	{
		for(int i=1;i<=1;i++)
		{
			for (int j=1;j<=1;j++)
			{
				cout <<"Enter the day of call : \n";
	cin >>day;
	//one condition
	if (day <=5&&day >=1)
	{
		int time ;
		cout <<"Enter the time your call started in 24-hr notation :\n";
		cin >>time;
		if (time >= 800 &&time <=1800)
		{
			int mint ;
			cout <<"Enter the length of your call in mint :\n";
			cin >>mint;
			cout <<"the cost of your call is Rs."<<mint*24<<endl;
		}
	
	//second condition
		int time1 ;
		if (time >=0000&&time<800||time >1800&&time<=2400)
		{
		
			int mint ;
			cout <<"Enter the length of your call in mint :\n";
			cin >>mint ;
			cout <<"the cost of your call is Rs."<<mint*15<<endl;
	}
 	}
	//third condition
	if (day >5&&day <=7)
	{
		int time ;
		cout <<"Enter the time your call started in 24-hr notation :\n";
		cin >>time;
			int mint ;
			cout <<"Enter the length of your call in mint :\n";
			cin >>mint;
			cout <<"the cost of your call is Rs."<<mint*9<<endl;
	} else if (day<1||day>7){
		cout <<"BAD_INPUT";
	}
			}
			cout <<"Do you want to do another calculation ? (1 for yes and 0 to quit \n";
	 	 	cin>>ans;
	 	 	if (ans==0)
	 	 	{
	 	 		cout <<"Thanks for calculation \n";
	 	 		i++;
			}
		}
	} else {
		cout <<"Thanks for calculation !";
	}	
}
