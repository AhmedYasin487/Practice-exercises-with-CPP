#include <iostream>
using namespace std;
int main ()
{
	//taking input frim the user
	int num, largest = 0, second_largest = largest;
	bool choice = false;    //  Bool only works on 0 and 1 which means 0 = false and 1 = true
	char option;
	
	do {
		do {
	
			cout <<"put any positive number \n";
			cin>>num;
			
			if(largest < num) {
				second_largest = largest;
				largest = num;
			}
			
		}while(num > 0);
		
		cout<< "second largest "<< second_largest <<endl<<endl;
		cout<< "largest "<< largest <<endl << endl;
		cout<<"Are you want to test again (y/n)";
		cin>>option;
		choice = option == 'y';
	}while(choice);
	

}
