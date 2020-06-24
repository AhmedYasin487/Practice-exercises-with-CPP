#include <iostream>
using namespace std;
int main()
{
	float computer,math,physics,english,urdu,islamiyat,total,averge,gpa,cgpa;
	cout <<"how many marks you got in maths : \n";
	cin >>math;
	cout <<"how many marks you got in computer :  \n";
	cin>>computer;
	cout <<"how many marks you got in physics :  \n";
	cin>>physics;
	cout <<"how many marks you got in urdu :  \n";
	cin>>urdu;
	cout <<"how many marks you got in english :  \n";
	cin>>english;
	cout <<"how many marks you got in islamiyat :  \n";
	cin >>islamiyat;
	total=computer+math+physics+english+urdu+islamiyat;
	cout <<"Total = "<<total<<"\n";
	averge=total/2;
	cout<<"Averge = "<<averge;
	return 0;
}


//incomplete
