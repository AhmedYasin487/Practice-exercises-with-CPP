#include <iostream>
using namespace std;
int main()
{
	int i=2,a=1;
	cout <<1<<" days"<<"\t\t"<<1<<" cents "<<endl;
	while (i<=24)
	{
		a=a*2;
		cout <<i<<" days"<<"\t\t"<<a<<" cents "<<endl;
		i++;
	}
}

