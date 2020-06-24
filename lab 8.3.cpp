#include <iostream>
using namespace std;
int main ()
{
	int table,limit,product,zar,i=0;
	cout <<"Which table : \n";
	cin >>table;
	cout <<"Limit of your table : \n";
	cin >>limit;
	while (i<=limit)
	{
		cout <<table<<" X "<<i<<" = "<<table*i<<endl;
		i++;
	}
	return 0;
}
