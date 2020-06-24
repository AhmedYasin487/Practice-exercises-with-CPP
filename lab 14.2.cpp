#include <iostream>
using namespace std;
int area(int );
int area(int, int );
int area(int, int, int );
int main ()
{
	int option;
	cout <<"1- circle \n2- rectangle \n3- triangle\n4- Exit \n";
	cin >>option;
	int r,l,w,b,h;
	switch (option)
	{
		case 1:
			//cout <<"Radius : ";
			//cin>> r;
			//area(r*r*3.14);
			//area(r);
			cout <<area(r);
			break;
		case 2:
//			cout <<"Lenght : ";
//			cin >>l;
//			cout <<"Width : ";
//			cin>>w;
//			area(l*w);
			cout <<area(l,b);
			break;
		case 3:
//			cout <<"Base : ";
//			cin >>b;
//			cout <<"Height : ";
//			cin >>h;
//			area(b*h*0.5);
			cout <<area(b,h);
			break;
		case 4 :
			cout <<" ";
			break;
		default :
			cout <<"Invalid input.";
			
	}
	
}
int area(int r)
{
	cout <<"Radius : ";
			cin>> r;
			int a=r*r*3.14;	
}
int area(int l,int w)
{
			cout <<"Lenght : ";
			cin >>l;
			cout <<"Width : ";
			cin>>w;
			int b=l*w;
}
int area(int b,int h,int )
{
			cout <<"Base : ";
			cin >>b;
			cout <<"Height : ";
			cin >>h;
			int c =b*h*0.5;

}

