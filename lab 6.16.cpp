#include <iostream>
using namespace std;
int main()
{
	float computer,math,physics,english,urdu,biology,islamiyat,total,average;
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
	cout<<"how many marks you got in biology : \n";
	cin>>biology;
	total=computer+math+physics+english+urdu+islamiyat,biology;
	average=total/7;
	cout <<"Average : "<<average;
	if (average >=80)
	{
		cout <<"Grade A+";
	} else if (average >=73)
	{
		cout <<"Grade A";
	} else if (average >=65)
	{
		cout <<"Grade B";
	} else if (average >=55)
	{
		cout <<"Grade C";
	} else if (average >=45)
	{
		cout <<"Grade D";
	} else if (average >=33)
	{
		cout <<"Grade E";
	} else 
	{
		cout <<"Fail";
	}
	
}
