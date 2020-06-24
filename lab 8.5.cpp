#include <iostream>
using namespace std;
int main ()
{
	int num,factorial = 1;
	cout<<"Put number of which you want to find a factorial : \n";
	cin>>num;
	int i=1;
	while (i<=num)
	{
		factorial = factorial * i;
		i++;
	}
	cout <<"Factorial of given number is = "<<factorial;
	return 0;
}
