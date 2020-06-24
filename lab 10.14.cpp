#include <iostream>
#include <stdlib.h>
using namespace std;
//daclaring variables 
char a11,a12,a13,a21,a22,a23,a31,a32,a33;
int player,row,column,i=1,j=1;
															//Formation of grid
int grid()
{
	cout <<"\t\t\t\t "<<a11<<" | "<<a12<<" | "<<a13  <<"\n";
	cout <<"\t\t\t\t---|---|--- \n";
	cout <<"\t\t\t\t "<<a21<<" | "<<a22<<" | "<<a23  <<"\n";
	cout <<"\t\t\t\t---|---|--- \n";
	cout <<"\t\t\t\t "<<a31<<" | "<<a32<<" | "<<a33  <<"\n";
}

 															//input player 1
int cin_player1()
{
	cout <<"Player 1 turn \n";
	cout <<"Row number :";
	cin >>row;
	cout <<"Column number: ";
	cin >>column;
}

															//input player 2
int cin_player2()
{
	cout <<"Player 2 turn \n";
	cout <<"Row number :";
	cin >>row;
	cout <<"Column number :";
	cin>>column;
}
															//invalid for player one 
int invalid_1()
{
	for (i=1;i<=1;)
	{
		if(row>=1&&row<=3&&column>=1&&column<=3){
			break;
		} else {
			cout <<"invalid row and column. Enter again :\n";
		}
		cin_player1();
	}
}
                                                           //invalid for player two
int invalid_2()
{
	for (i=1;i<=1;)
	{
		if (row>=1&&row<=3&&column>=1&&column<=3)
		{
			break ;
		} else {
			cout <<"invalid row and column. Enter again :\n";
		}
		cin_player2();
	}
}
																//input player 1 turn 3
int input_12()
{
	for (i=1;i<=1;)
	{
	if(row==1 && column ==1 && a11!='o'&& a11!='x')
	{
		a11='x'; break;
	} else if (row==1 && column ==2 && a12!='o' &&a12!='x')
	{
		a12='x'; break; 
	} else if (row==1 && column ==3 && a13!='o'&& a13!='x')
	{
		a13='x'; break;
	} else if (row==2 && column ==1 && a21!='o' && a21!='x')
	{
		a21='x'; break;
	} else if (row==2 && column ==2 && a22!='o' && a22!='x')
	{
		a22='x'; break;
	} else if (row==2 && column ==3 && a23!='o'&& a23!='x')
	{
		a23='x'; break;
	} else if (row==3 && column ==1 && a31!='o'&& a31!='x')
	{
		a31='x'; break;
	} else if (row==3 && column ==2 && a32!='o'&& a32!='x')
	{
		a32='x'; break;
	} else if (row==3 && column ==3 && a33!='o'&& a33!='x')
	{
		a33='x'; break;
	} else {
		cout <<"no space \n\n";
		cin_player1();
		invalid_1();
	}
}
	return 0;
	
}
																//input player 2 turn 4
int input_24()
{
	for (i=1;i<=1;)
	{
	if(row==1 && column ==1 && a11!='o'&& a11!='x')
	{
		a11='o'; break;
	} else if (row==1 && column ==2 && a12!='o' &&a12!='x')
	{
		a12='o'; break; 
	} else if (row==1 && column ==3 && a13!='o'&& a13!='x')
	{
		a13='o'; break;
	} else if (row==2 && column ==1 && a21!='o' && a21!='x')
	{
		a21='o'; break;
	} else if (row==2 && column ==2 && a22!='o' && a22!='x')
	{
		a22='o'; break;
	} else if (row==2 && column ==3 && a23!='o'&& a23!='x')
	{
		a23='o'; break;
	} else if (row==3 && column ==1 && a31!='o'&& a31!='x')
	{
		a31='o'; break;
	} else if (row==3 && column ==2 && a32!='o'&& a32!='x')
	{
		a32='o'; break;
	} else if (row==3 && column ==3 && a33!='o'&& a33!='x')
	{
		a33='o'; break;
	} else {
		cout <<"no space \n\n";
		cin_player2();
		invalid_2();
	}
}
	return 0;
	
}
int main ()
{
grid();
	cin_player1();
	invalid_1();
	input_12();
grid();

	cin_player2();
	invalid_2();
	input_24();
grid();

	cin_player1();
	invalid_1();
	input_12();
	
grid();
	for(j=1;j<=5;)
	{
		cin_player2();
		invalid_2();
		input_24();
	grid();
		if (a11=='o'&&a12=='o'&&a13=='o'||a21=='o'&&a22=='o'&&a23=='o'||a31=='o'&&a32=='o'&&a33=='o'|| a11=='o'&&a21=='o'&&a31=='o' || a12=='o'&&a22=='o'&&a32=='o' ||a11=='o'&&a22=='o'&&a33=='o' ||a13=='o'&&a22=='o'&&a31=='o' ){
		cout<<"Player two Won !\n";
		break;
	}
	
	j++;
		cin_player1();
		invalid_1();
		input_12();
	grid();
		if (a11=='x'&&a12=='x'&&a13=='x'||a21=='x'&&a22=='x'&&a23=='x'||a31=='x'&&a32=='x'&&a33=='x'|| a11=='x'&&a21=='x'&&a31=='x' || a12=='x'&&a22=='x'&&a32=='x' ||a11=='x'&&a22=='x'&&a33=='x' ||a13=='x'&&a22=='x'&&a31=='x' ){
		cout<<"Player one Won !\n";
		break;
	}
	j++;
	}
	cout <<"= Game draw = \n";		
}
