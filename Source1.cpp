#include <iostream>
using namespace std;

int num, num2, i, j, z;
//Starting function
int start()
{
	cout << " I have a number between 1 to 100! \n Can you guess my number \n You have maximum five \n Enter your guess here :\n";
	cin >> num;
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
	cout <<"You play like a pro";
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
	}
	if (greater_())
	{
		continue;
	}
	if (smaller())
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
	}
	if (num2<50)
	{
		cout <<"Its smaller";
	}

	if (num2==50) {

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









