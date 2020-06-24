#include <iostream>
using namespace std;
int main()
{
	int temp;
	cout <<"input the temperature.";
	cin>>temp;
	if (temp>=35)
	{
		cout <<"Temperature\t\t\t\tMessage \nGreater Than 35\t\t\t\tHot day";
	} else if (temp>=25&&temp<35)
	{
		cout <<"Temperature\t\t\t\tMessage \nBetween 25 and 35(inclusive)\t\t\t\tPleasent day";
	} else if (temp<25)
	{
		cout <<"Temperature\t\t\t\tMessage \nless than 25\t\t\t\tCool day";
	}
	return 0;
		
}
