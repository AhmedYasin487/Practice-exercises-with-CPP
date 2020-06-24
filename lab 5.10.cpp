#include <iostream>
using namespace std;
int main ()
{
	float radius,diameter,area,circumfrence;
	cout<<"What is the radius of the circle? \n";
	cin >>radius;
	
	//Diameter
	diameter=radius*2;
	cout<<"The diameter of the circle is : "<<diameter<<endl;
	
	//Area
	const int PI=3.14;
	area=PI*radius*radius;
	cout<<"The Area of the circle is : "<<area<<endl;
	
	//circumfrence
	circumfrence =2*PI*radius;
	cout<<"The circumfrence of the circle is : "<<circumfrence<<endl;
	
return 0;
}
