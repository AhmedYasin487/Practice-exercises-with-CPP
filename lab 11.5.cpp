#include <iostream>
using namespace std;
int main()
{
	int num1,num2,weight=0;
	char choice;
	cout <<"Enter the nummber of chocolates being sold :";
	cin>>num1;
	cout <<"Enter weight of one chocolate in ounces :";
	cin >>num2;
	cout <<"Enter the choice of weighing : \n Enter O to calculate in ounces \n P for pounds \n G for grams \n K for kilograms \n Enter your choice : ";
	cin>>choice;
	switch (choice)
	{
		case 'O':
			weight=num1*num2;
			cout <<"Weight in Ounces  :"<<weight;
			break;
		case 'P':
			weight=(num1*num2)/16;
			cout <<"Weight in Pounds  :"<<weight;
			break;
		case 'G':
			weight=num1*num2*28.346;
			cout <<"Weight in Grams  :"<<weight;
			break;
		case 'K':
			weight=(num1*num2*28.346)/1000;
			cout <<"Weight in Kilograms  :"<<weight;
			break;
		case 'o':
			weight=num1*num2;
			cout <<"Weight in Ounces  :"<<weight;
			break;
		case 'p':
			weight=(num1*num2)/16;
			cout <<"Weight in Pounds  :"<<weight;
			break;
		case 'g':
			weight=num1*num2*28.346;
			cout <<"Weight in Grams  :"<<weight;
			break;
		case 'k':
			weight=(num1*num2*28.346)/1000;
			cout <<"Weight in Kilograms  :"<<weight;
			break;
		default :
			cout <<"Invalid input Try again:";
	}	
}
