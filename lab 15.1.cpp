#include <iostream>
using namespace std;
int square_ref()
{
	int num=4;
	int &numref=num;
	cout <<"Sqaure = "<<num*numref<<endl;
	cout <<"Memory Address = "<<&numref;
}
int square_ptr()
{
	int num=4;
	int* numptr = &num;
	cout <<"\nSquare = "<<*numptr*num<<endl;
	cout <<"Memory Address = "<< numptr;
//	cout <<"CHanging the value of pointer :"<<*numptr=5;
//	cout <<"\nderefrence pointer "<< *refptr * num;
}
int main ()
{
	square_ref();
	square_ptr();

}
