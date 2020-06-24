#include <iostream>
using namespace std;
int main ()
{
	double dollar,rupee,exchange;
	cout <<"How many dollars you want to exchange ? \n";
	cin>>dollar;
	cout<<"what is current currancy rate ? \n";
	cin>>rupee;
	exchange=rupee*dollar;
	cout <<"Here is total amount below : \n";
	cout <<"\t"<<exchange<<"rupees";
	return 0;
}
