#include <iostream>
using namespace std;
int main ()
{
	int ans,a=0,b=0,c=0,d=0,i=1;
	while (i<=10)
	{
	cout<<"what you want ? \n 1)perfect life \n 2) jannah \n 3)sakoon \n 4)power \n";
	cin>>ans;
	if (ans==1)
	{
		a=a+1;
	} else if (ans ==2)
	{
		b=b+1;	
	} else if (ans ==3)
	{
		c=c+1;	
	} else if (ans ==4)
	{
		d=d+1;	
	}
	i++;
    }
    cout <<"\n"<<a<<" You times choosed option 1 or a"<<endl;
    cout <<b<<" You times choosed option 2 or b"<<endl;
    cout <<c<<" You times choosed option 3 or c"<<endl;
    cout <<d<<" You times choosed option 4 or d"<<endl;
}
