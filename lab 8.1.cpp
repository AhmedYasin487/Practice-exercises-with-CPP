#include <iostream>
using namespace std;
int main ()
{

int sum, i = 0;
	
	while( i <= 10) {
		
		if (i % 2 != 0){	
			cout<< i << " " << endl;
			sum = sum + i;
		}
 	i++;
}
	
	cout<< "SUM OF ODD NUMBER ARE: " << sum << " " << endl;

}
