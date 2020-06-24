#include <iostream>
using namespace std;
int main ()
{
	int num_students,marks,i=1;
	cout<<"Put the number of students in your class : \n";
	cin>>num_students;
	while (i<=num_students)
	{
	cout <<"Put the marks of number "<<i<<" student \n" ;
	cin>>marks;
	cout <<marks<<endl;
	i++;
	}
}
