#include <iostream>
using namespace std;
int main ()
{
	char letter;
	cout <<"alphabet : \n";
	cin >>letter;
	int ascii=letter;
	if (ascii>=65&&ascii<=90)
	{
		cout<<"uppercase character.";
	} else if (ascii>=97&&ascii<=122)
	{
		cout <<"lower case.";
	} else if (ascii>=32&&ascii<=47)
	{
		cout <<"special characters.";
	}
	else
	{
		cout <<"numbers.";
	}
return 0;
}
