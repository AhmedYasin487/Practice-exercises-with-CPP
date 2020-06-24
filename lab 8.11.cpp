#include <iostream>
using namespace std;
int main ()
{
	//taking upperlimit from the user
	
	int upper_limit,num=2;
	cout <<"Provide me a limit :";
	cin >>upper_limit;
	int i=1;


	//printing series
	cout<<"1"; /*
	while (i<=upper_limit)
	{
		num = num*2;
		cout <<1<<"/"<<num<<" +";
		i++;
	}
	cout<<"..."<<upper_limit;*/
	
	
	
	
	//series sum;
	double sum=1,div;
	while (i<=upper_limit)
	{
		cout<<" + ";
		num = num*2;
		cout <<1<<"/"<<num;
		sum=sum +1;
		i++;
	}
	cout <<endl<<endl;
	cout<<"Sum in fractional form "<<sum<<"/"<<num <<endl;
	div=(sum/num);
	cout<<"Sum unfractional form" <<div;
	
}
