#include <iostream>
using namespace std;
int main ()
{
	float product_cost,price,profit;
	cout <<"What is the manufacturing cost of product :";
	cin >>product_cost;
	cout <<"What is saling price : ";
	cin >>price ;
	profit =price-product_cost;
	cout <<"Profit = "<<profit<<endl;
	float percentage = (profit*100)/price;
	cout <<percentage<<"% Profit is made from this product.\n";
	if (percentage >10 )
	{
		float bonus = profit * 0.01;
		cout <<"Bonus : "<<bonus;
	} else
	{
		cout <<"";
	}
	return 0;
	 
}
