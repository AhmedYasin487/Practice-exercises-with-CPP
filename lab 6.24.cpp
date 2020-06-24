#include <iostream>
using namespace std;
int main()
{
	int time,salary_less_forty,salary_larger_forty;
	cout <<"How many hours did you work ? ";
	cin >>time;
	if (time <=40)
	{
		salary_less_forty=time*10;
		cout<<"Here is your total salary "<<salary_less_forty<<"$"<<endl;
	}
	else {
		int time_lest =time - 40;
		salary_less_forty=40*10;
		salary_larger_forty=time_lest*12+salary_less_forty;
		cout <<"Well done! you did really hardwork. take your reward = "<<salary_larger_forty<<"$"<<endl;
	}
	return 0;
}
