#include <iostream>
using namespace std;
int swap_ref()
{
	cout <<"Swapping with refrence \nNum 1 = 3 \nNum 2 = 5";
	
	int n3=5;
	int &n4=n3;
	cout <<endl<<"swap Num 1 = "<<n4;
	int n1=3;
	int &n2=n1;
	cout <<"\nswap Num 2 =  "<<n2;

	//int &n1=n2;	
}
int swap_ptr()
{
	cout <<"\n\nSwapping with pointers \nNum 1 = 3 \nNum 2 = 5";

	int n3=5;
	int *n4=&n3;
	cout <<endl<<"swap Num 1 = "<<*n4;
	int n1=3;
	int *n2=&n1;
	cout <<"\nSwap Num 2 = "<<*n2;

	//int &n1=n2;	
}
int main()
{
	swap_ref();
	swap_ptr();
}
