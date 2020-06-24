#include <iostream>
using namespace std;
/*int main ()
{
	
	int c;
	cin>>c;
	
	for (int i=1;i<=5;i++)
	{
		if (c==3)
		{
			cout <<"ahmed"<<i;
			continue;
		} else {
					cout <<i;

		break;
		}
		
	}
}
int main ()
{
	int z=1;
	char a11;
	cin>>a11;
	for (;z<=3;){
	
	if (a11=='x')
	{
		cout <<"working";
		z++;
	} else {
		break;
	}
}
	
} 
*/#include <iostream>
using namespace std;

int num,num2,i,j,z;
     									//Starting function
int start ()
{
	cout <<" I have a number between 1 to 100! \n Can you guess my number \n You have maximum five \n Enter your guess here :\n";
	cin >>num;
}

int greater_()
{
	if(num<50)
	{
		cout<<"Its greater";
	}
}
int smaller()
{
	if (num<50)
	{
		cout <<"Its smaller";
	}
}
int equal()
{
	if (num==50) {
	//cout <<"You play like a pro";
}
}





int guess()
{
	start ();
	for (j=1,j<=1;j++;)
	{ 
	if(equal())
	{
		cout<<"You are the master of this game!";
		break;
	} else if (greater_())
	{
		continue;
	} else if (smaller())
	{
		continue;
	} 
	cout <<"Guess again : ";
	cin >>num2;
	
	for (i=1;i<=5;i++)
	{
	if(num2<50)
	{
		cout<<"Its greater";
	} else if (num2<50)
	{
		cout <<"Its smaller";
	} else if (num2==50) {

	cout <<"You play like a pro";
	break;
 				   }
	}
 	}
	
}
int main ()
{
	guess();
}







