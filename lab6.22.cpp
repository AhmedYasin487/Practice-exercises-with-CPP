#include <iostream>
using namespace std;
int main()
{
	int price ,quantity,total,bill,discount;
	cout <<"What is the price of item you took ? \n";
	cin >>price;
	cout <<"How many items you took ? \n";
	cin >>quantity;
	total=price*quantity;
	if (total>1000)
	{
		cout <<"Congratulation! you git 5% off.";
		discount=total*0.05;
		bill=total-discount;
		cout <<"Your total bill = "<<bill;
	}
	else
	{
		cout <<"Your total bill = "<<total;
	}
	return 0;
}
