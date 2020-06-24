#include <iostream>
using namespace std;
int main()
{
	float choice,value;
	cout <<"Please enter your choice as \n\n";
	cout <<" 1. For Inch - to- Centimeter \n 2. For Gallons - to - Liters \n 3. For Miles - to - Kilometer \n 4. For Pound - to - kilogram \n";
    cin >>choice;
    cout<<"How much you want to convert ?";
    cin>>value;
    if (choice==1)
    {
	float val1;
        val1=2.54*value;
        cout <<"(as 1 Inch = 2.54 centimeters) \n"<<value<<" = "<<val1;
	} else if (choice==2){
	float val2;
        val2=3.785*value;
        cout <<"(as 1 Gallons = 3.785 liters) \n"<<value<<" = "<<val2;
	} else if (choice==3){
	float val3;
        val3=1.609*value;
        cout <<"(as 1 Miles = 1.609 kilometers) \n"<<value<<" = "<<val3;
	} else{
	float val4;
        val4=0.4536*value;
        cout <<"(as 1 Pound = 0.4536 kilograms) \n"<<value<<" = "<<val4;
	}
	return 0;
	
}
