#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//Taking numbers from user!!
	cout <<"Put first number which you want to add,subtract,multiply and divide with other number \n";
	int firstnumber; 
	cin >>firstnumber;
	cout <<"Put the second number you want to add,subtract,multiply and divide with first number \n";
	int secondnumber;
	cin >>secondnumber;
	//headings
	cout<<"   ADDITON   \t" <<"   SUBTRACTION      \t"<<"    MULTIPLICATION   \t"<<"     DIVIDE   \n";
	//Calculation
	int sum,sub,mul,div;
	sum=firstnumber+secondnumber;
	sub=firstnumber-secondnumber;
	mul=firstnumber*secondnumber;
	div=firstnumber/secondnumber;
	//Output
	cout<<firstnumber<<" + "<<secondnumber<<" = "<<sum <<"\t\t";
	cout<<firstnumber<<" - "<<secondnumber<<" = "<< sub<<"\t\t";
	cout<<firstnumber<<" X "<<secondnumber<<" = "<<mul <<"\t\t";
	cout<<firstnumber<<" / "<<secondnumber<<" = "<<div<<endl;
	return 0;
}
