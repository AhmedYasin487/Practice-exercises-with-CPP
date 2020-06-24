#include <iostream>
using namespace std;
int main ()
{
	int nume,denume;
	cout <<"Numerator :";
	cin>>nume;
	cout <<"Denumerator :";
	cin>>denume;
	for (int i=1;i<=1000;i++)
	{
		
		if(nume%2==0&&denume%2==0)
		{
			nume=nume/2;
			denume=denume/2;
				
		} else if (nume%3==0&&denume%3==0)
		{
		    nume=nume/3;
			denume=denume/3;
			
		} else if (nume%5==0&&denume%5==0)
		{
			nume=nume/5;
			denume=denume/5;
			
		} else if (nume%7==0&&denume%7==0)
		{
			nume=nume/7;
			denume=denume/7;
		} else if (nume%11==0&&denume%11==0)
		{
			nume=nume/11;
			denume=denume/11;
		} else if (nume%13==0&&denume%13==0)
		{
			nume=nume/13;
			denume=denume/13;
		}
		
	}
	cout <<nume<<"/"<<denume;
}
