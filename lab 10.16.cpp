#include <iostream>
using namespace std;

int num, num2, i, j, z;
char ans;
//Starting function
int start()
{
	cout << " I have a number between 1 to 100! \n Can you guess my number \n You have maximum five \n Enter your guess here :\n";
	cin >> num;
	return 0;
}

int guess()
{
	start();
	for (j = 1, j <= 1; j++;)
	{
		if (num==50)
		{
			cout << "You are the master of this game!";
			break;
		} else if (num > 50)
		{
		cout << "Its greater \n";
		} else if (num < 50)
		{
		cout << "Its smaller \n";
		}
	
		cout << "Guess again : ";
		cin >> num2;
		for (i = 1; i <= 4;i++ )
		{
			if (num2 > 50)
			{
				cout << "Its greater \n";
			}
			if (num2 < 50)
			{
				cout << "Its smaller \n";
			}

		cout << "Guess again : ";
		cin >> num2;
			if (num2 == 50) {

			cout << "You play like a pro \n";
			break;
			}
		}
			if (num2 == 50) {

			//cout << "You play like a pro \n";
			break;
			}
		cout <<"You lost better luck next time :( \n";
		break;
	}

}
//again
int again()
{
	cout <<"Want to play again ? (y/n)";
	cin >>ans;
	cout<<endl;
	if (ans=='y')
	{
		guess();
	} else if (ans =='n') {
		cout <<"Thanks for playing !";
	}
	
}
int main()
{
	guess();
	again();
	return 0;
}
