#include <iostream>
using namespace std ;
int main ()
{
	//Taking value from user
	
	int num;
	char num2 ,i ='y';
	cout <<"Put integer : ";
	cin >> num;
	
	//prime number logic
	
	if( num == 2 || num ==3 ||num == 5 || num ==7 || num ==9 ){
		cout <<"its prime number \n";
	} else if (num%2!=0 && num%3!=0 &&num%5!=0 &&num%7!=0){
		cout <<"Its prime number \n" ;
	} else {
		cout <<"its not prime number \n" ;
	}
	
	//Ask again for value from user
	
	cout <<"Want me to test again ? (y/n)\n ";
	cin >>num2;
	
	//run again or not
	
	if (num2=='y')
	{
		while (i=='y')
		{
			char j  ='y';
			while (j=='y') {
				cout <<"Put integer : ";
	 		cin >> num;
	
	//prime number logic
	
	if( num == 2 || num ==3 ||num == 5 || num ==7 || num ==9 ){
		cout <<"its prime number \n";
	} else if (num%2!=0 && num%3!=0 &&num%5!=0 &&num%7!=0){
		cout <<"Its prime number \n" ;
	} else {
		cout <<"its not prime number \n" ;
	}
			
			
		 	j++;
	 	}
	 	cout <<"Want me to test again ? (y/n)\n ";
	 	cin >>num2;
	 	if (num2=='n')
	 	{
	 		i++;
	 		cout <<"Thank you !";
		}
		}
	} else {
		cout <<"no \n";
	}
}













































































/*#include <iostream>
using namespace std ;
int main ()
{
	//Taking value from user
	
	int num;
	char num2 ,i ='y';
	/*cout <<"Put integer : ";
	cin >> num;
	
	//prime number logic
	
	if( num == 2 || num ==3 ||num == 5 || num ==7 || num ==9 ){
		cout <<"its prime number \n";
	} else if (num%2!=0 && num%3!=0 &&num%5!=0 &&num%7!=0){
		cout <<"Its prime number \n" ;
	} else {
		cout <<"its not prime number \n" ;
	}
	
	//Ask again for value from user
	
	cout <<"Want me to test again ? (y/n)\n ";
	cin >>num2;
	
	//run again or not
	
	if (num2=='y')
	{
		while (i=='y')
		{
			char j  ='y';
			while (j=='y') {
				
			
			cout <<"yes \n";
		 	j++;
	 	}
	 	cout <<"Want me to test again ? (y/n)\n ";
	 	cin >>num2;
	 	if (num2=='n')
	 	{
	 		i++;
	 		cout <<"Thank you !";
		}
		}
	} else {
		cout <<"no \n";
	}
}

*/








































































































/*int main ()
{
	/
	int num1,i=1;
	cout <<"put integer \n";
	cin>>num1;
	while (i<=1)
	{
		if (num1%20 && num1%3!=0 &&num1%5!=0 &&num1%7!=0)
		{
			cout <<"its prime number \n ";
			
		}  else { 
		cout <<"its not prime number \n";  }
		i++;
    }
			cout <<"want me to check it again ? (y/n) \n";
		char prime_num;
		cin >>prime_num;
		if (prime_num == 'y')
		{
		cout <<"put integer \n";
	    cin>>num1;
		int j=1;
		while (j<=1)
	{
		if (num1%2!=0 && num1%3!=0 &&num1%5!=0 &&num1%7!=0)
			{
			cout <<"its prime number \n ";
			
		}  				else { 
		cout <<"its not prime number \n";  }
		j++;
		
    }
	    } else {
	    	cout <<"thanku";
		}
    
}*/

