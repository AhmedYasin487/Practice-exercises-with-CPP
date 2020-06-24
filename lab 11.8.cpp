#include <iostream>
using namespace std;
int main ()
{
	char shape;
	float width,length,area,radius;
	cout <<"Enter R for rectangle \nEnter S for square \nEnter C for circle \nEnter your choice :";
	cin >>shape;
	switch (shape)
	{
		case 'R':
			cout <<"Enter width : ";
			cin >>width;
			cout <<"Enter length : ";
			cin>> length;
			area = width*length;
			cout <<"Area of the rectangle is :"<<area;
			break;
		case 'S':
			cout <<"Enter length";
			cin>>length;
			area=length*length;
			cout <<"Area of the sqaure is :"<<area;
			break;
		case 'C' :
			cout <<"Enter radius :";
			cin>>radius;
			area=(3.14)*radius*radius;
			break;
		case 'r':
			cout <<"Enter width : ";
			cin >>width;
			cout <<"Enter length : ";
			cin>> length;
			area = width*length;
			cout <<"Area of the rectangle is :"<<area;
			break;
		case 's':
			cout <<"Enter length";
			cin>>length;
			area=length*length;
			cout <<"Area of the sqaure is :"<<area;
			break;
		case 'c' :
			cout <<"Enter radius :";
			cin>>radius;
			area=(3.14)*radius*radius;
			cout <<"Area of the circle :"<<area;
			break;
		default :
			cout <<"Invalid input";
	}
}
