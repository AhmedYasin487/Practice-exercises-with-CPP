#include <iostream>
using namespace std;
int main ()
{
	int choose;
	cout <<"Enter \n1. for Lahore \n2. for Karachi\n3. for Peshawar \n";
	cin >>choose;
	switch (choose)
	{
		case 1:
			cout <<"\n1. Lahore is the capital of Punjab";
			break;
		case 2:
			cout <<"\n2. Karachi is the capital of sindh";
			break;
		case 3:
			cout <<"\n3. Peshawar is the capital of KPK";
			break;
		default:
			cout <<"\ninvalid option";
	}
}
