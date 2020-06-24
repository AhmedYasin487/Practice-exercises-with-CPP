#include <iostream>
using namespace std;
int main ()
{
	int num1 ,num2,i=2,new_value;
	cout <<"first value\n";
	cin>>num1;
	cout <<"second value\n";
	cin>>num2;
	if (num1>=2)
	{
	while (i<=num1)
	{
		new_value=num2*num2;
		i++;
	}
	cout <<new_value;
 	} else if (num1==1) {
 		cout <<num2;
	 } else
	 {
	 	cout <<'1';
	 }
}
