#include <iostream>
using namespace std;
	int val1=0,val2=0,val3=0,val4=0,val5=0,val6=0,n2=0;
int again()
{
	int num2=0,num1=0,nn2=0;
	cout <<"\nAgain put five digit integer :";
	cin >>n2;
	//nn2=n2;
		for (int i=1;i<=5;i++)
	{
		num2=n2%10;
		num1=n2/10;		
	}
//	cout <<num2<<endl;
//	cout <<num1<<endl;
	int num3,num4=0;
	for (int j=1;j<=4;j++)
	{
		num3=num1%10;
		num4=num1/10;
	}
//	cout <<num3<<endl;
//	cout <<num4<<endl;
	int num5,num6;
	for (int z=1;z<=3;z++)
	{
		num5=num4%10;
		num6=num4/10;
	}
//	cout <<num5<<endl;
//	cout <<num6<<endl;
	int num7,num8;
	for (int a=1;a<=2;a++)
	{
		num7=num6%10;
		num8=num6/10;
	}
//	cout <<num7<<endl;
//	cout <<num8<<endl;
	int num9=num8%10;
//	cout <<num8;
//	cout <<endl<<num9<<num7<<num5<<num3<<num2<<endl;
cout <<endl;
	if(num9==0){
		cout <<"9";
		val1=90000;
	} else if (num9==1)
	{
		cout<<"8";
		 val1=80000;
	} else if (num9==2)
	{
		cout<<"7";
		val1=70000;
	} else if (num9==3)
	{
		cout<<"6";
		 val1=60000;
	} else if (num9==4)
	{
		cout<<"5";
		 val1=50000;
	} else if (num9==5)
	{
		cout<<"4";
		val1=40000;
	} else if (num9==6)
	{
		cout<<"3";
		 val1=30000;
	} else if (num9==7)
	{
		cout<<"2";
		 val1=20000;
	} else if (num9==8)
	{
		cout<<"1";
		 val1=10000;
	} else if (num9==9)
	{
		cout <<"0";
		 val1=00000;
	}
	
	
	
	
		if(num7==0){
		cout <<"9";
		 val2=9000;
	} else if (num7==1)
	{
		cout<<"8";
		val2=8000;
	} else if (num7==2)
	{
		cout<<"7";
		 val2=7000;
	} else if (num7==3)
	{
		cout<<"6";
		 val2=6000;
	} else if (num7==4)
	{
		cout<<"5";
		 val2=5000;
	} else if (num7==5)
	{
		cout<<"4";
		val2=4000;
	} else if (num7==6)
	{
		cout<<"3";
		 val2=3000;
	} else if (num7==7)
	{
		cout<<"2";
		 val2=2000;
	} else if (num7==8)
	{
		cout<<"1";
		 val2=1000;
	} else if (num7==9)
	{
		cout <<"0";
		 val2=0000;
	}
	
	
	
		if(num5==0){
		cout <<"9";
		 val3=900;
	} else if (num5==1)
	{
		cout<<"8";
	 val3=800;
	} else if (num5==2)
	{
		cout<<"7";
		val3=700;
	} else if (num5==3)
	{
		cout<<"6";
		 val3=600;
	} else if (num5==4)
	{
		cout<<"5";
		 val3=500;
	} else if (num5==5)
	{
		cout<<"4";
		 val3=400;
	} else if (num5==6)
	{
		cout<<"3";
	 val3=300;
	} else if (num5==7)
	{
		cout<<"2";
	 val3=200;
	} else if (num5==8)
	{
		cout<<"1";
		val3=100;
	} else if (num5==9)
	{
		cout <<"0";
		 val3=000;
	}
	
	
	
	
		if(num3==0){
		cout <<"9";
		 val4=90;
	} else if (num3==1)
	{
		cout<<"8";
		 val4=80;
	} else if (num3==2)
	{
		cout<<"7";
		 val4=70;
	} else if (num3==3)
	{
		cout<<"6";
		 val4=60;
	} else if (num3==4)
	{
		cout<<"5";
		 val4=50;
	} else if (num3==5)
	{
		cout<<"4";
		 val4=40;
	} else if (num3==6)
	{
		cout<<"3";
		 val4=30;
	} else if (num3==7)
	{
		cout<<"2";
		 val4=20;
	} else if (num3==8)
	{
		cout<<"1";
		 val4=10;
	} else if (num3==9)
	{
		cout <<"0";
		 val4=00;
	}
	
	
	
	
		if(num2==0){
		cout <<"9";
		val5=9;
	} else if (num2==1)
	{
		cout<<"8";
		val5=8;
	} else if (num2==2)
	{
		cout<<"7";
		 val5=7;
	} else if (num2==3)
	{
		cout<<"6";
		 val5=6;
	} else if (num2==4)
	{
		cout<<"5";
		val5=5;
	} else if (num2==5)
	{
		cout<<"4";
		 val5=4;
	} else if (num2==6)
	{
		cout<<"3";
		 val5=3;
	} else if (num2==7)
	{
		cout<<"2";
		val5=2;
	} else if (num2==8)
	{
		cout<<"1";
		val5=1;
	} else if (num2==9)
	{
		cout <<"0";
		val5=0;
	}
	val6= val1+val2+val3+val4+val5;
//	cout <<"\nval6="<<val6;
}
int main ()
{
//	long num,ans,num1;
int num2=0,num1=0,num,n,ans;
 
	cout <<" \t\t\t\t\t| **** |     Prediction Game    | **** | \n\nPut five digit integer : ";
	cin>>n;
	ans=n-2;
	cout <<"Final answers will be : \n\t\t\t\t{*|*|*|*|}-----"<<2<<ans<<"-----{*|*|*|*|}    "<<endl;
	cout <<"\nAgain put five digit integer :";
	cin>>num;

	for (int i=1;i<=5;i++)
	{
		num2=num%10;
		num1=num/10;		
	}
//	cout <<num2<<endl;
//	cout <<num1<<endl;
	int num3,num4=0;
	for (int j=1;j<=4;j++)
	{
		num3=num1%10;
		num4=num1/10;
	}
//	cout <<num3<<endl;
//	cout <<num4<<endl;
	int num5,num6;
	for (int z=1;z<=3;z++)
	{
		num5=num4%10;
		num6=num4/10;
	}
//	cout <<num5<<endl;
//	cout <<num6<<endl;
	int num7,num8;
	for (int a=1;a<=2;a++)
	{
		num7=num6%10;
		num8=num6/10;
	}
//	cout <<num7<<endl;
//	cout <<num8<<endl;
	int num9=num8%10;
//	cout <<num8;
//	cout <<endl<<num9<<num7<<num5<<num3<<num2<<endl;
	int a1=0,a2=0,a3=0,a4=0,a5=0;
	cout <<endl;
	if(num9==0){
		cout <<"9";
		 a1=90000;
	} else if (num9==1)
	{
		cout<<"8";
		 a1=80000;
	} else if (num9==2)
	{
		cout<<"7";
		 a1=70000;
	} else if (num9==3)
	{
		cout<<"6";
		 a1=60000;
	} else if (num9==4)
	{
		cout<<"5";
		 a1=50000;
	} else if (num9==5)
	{
		cout<<"4";
		 a1=40000;
	} else if (num9==6)
	{
		cout<<"3";
		a1=30000;
	} else if (num9==7)
	{
		cout<<"2";
		 a1=20000;
	} else if (num9==8)
	{
		cout<<"1";
		 a1=10000;
	} else if (num9==9)
	{
		cout <<"0";
		 a1=00000;
	}
	
	
	
	
		if(num7==0){
		cout <<"9";
		 a2=9000;
	} else if (num7==1)
	{
		cout<<"8";
		 a2=8000;
	} else if (num7==2)
	{
		cout<<"7";
		 a2=7000;
	} else if (num7==3)
	{
		cout<<"6";
		 a2=6000;
	} else if (num7==4)
	{
		cout<<"5";
		a2=5000;
	} else if (num7==5)
	{
		cout<<"4";
		 a2=4000;
	} else if (num7==6)
	{
		cout<<"3";
		a2=3000;
	} else if (num7==7)
	{
		cout<<"2";
		a2=2000;
	} else if (num7==8)
	{
		cout<<"1";
		a2=1000;
	} else if (num7==9)
	{
		cout <<"0";
		a2=0000;
	}
	
	
	
		if(num5==0){
		cout <<"9";
		 a3=900;
	} else if (num5==1)
	{
		cout<<"8";
		 a3=800;
	} else if (num5==2)
	{
		cout<<"7";
	 a3=700;
	} else if (num5==3)
	{
		cout<<"6";
		 a3=600;
	} else if (num5==4)
	{
		cout<<"5";
		 a3=500;
	} else if (num5==5)
	{
		cout<<"4";
	 a3=400;
	} else if (num5==6)
	{
		cout<<"3";
		 a3=300;
	} else if (num5==7)
	{
		cout<<"2";
		a3=200;
	} else if (num5==8)
	{
		cout<<"1";
		 a3=100;
	} else if (num5==9)
	{
		cout <<"0";
		 a3=000;
	}
	
	
	
	
		if(num3==0){
		cout <<"9";
		 a4=90;
	} else if (num3==1)
	{
		cout<<"8";
		 a4=80;
	} else if (num3==2)
	{
		cout<<"7";
		 a4=70;
	} else if (num3==3)
	{
		cout<<"6";
	 a4=60;
	} else if (num3==4)
	{
		cout<<"5";
		 a4=50;
	} else if (num3==5)
	{
		cout<<"4";
		 a4=40;
	} else if (num3==6)
	{
		cout<<"3";
		 a4=30;
	} else if (num3==7)
	{
		cout<<"2";
		 a4=20;
	} else if (num3==8)
	{
		cout<<"1";
		 a4=10;
	} else if (num3==9)
	{
		cout <<"0";
		 a4=00;
	}
	
	
	
	
		if(num2==0){
		cout <<"9";
		 a5=9;
	} else if (num2==1)
	{
		cout<<"8";
		 a5=8;
	} else if (num2==2)
	{
		cout<<"7";
		 a5=7;
	} else if (num2==3)
	{
		cout<<"6";
		 a5=6;
	} else if (num2==4)
	{
		cout<<"5";
		 a5=5;
	} else if (num2==5)
	{
		cout<<"4";
		 a5=4;
	} else if (num2==6)
	{
		cout<<"3";
		a5=3;
	} else if (num2==7)
	{
		cout<<"2";
		 a5=2;
	} else if (num2==8)
	{
		cout<<"1";
		 a5=1;
	} else if (num2==9)
	{
		cout <<"0";
		 a5=0;
	}
	int a6=a1+a2+a3+a4+a5;
//	cout <<endl<<"a6="<<a6;
	again();
//	cout <<" \nAgain put five digit : ";
	int sum=0;
//	cin >>nn2;
	sum=n+num+n2+a6+val6;
//	cout <<"\n n = "<<n;
//	cout <<"\n num = "<<num;
//	cout <<"\n n2 = "<<n2;
//	cout <<"\n a6 = "<<a6;
//	cout <<"\n val6 = "<<val6;
	
	cout <<"\n\nSum = "<<sum;
	

}


















































//#include <iostream>
//using namespace std;
//int sum()
//{
//	int sum=0;
//	
//		int x[10];
//	for(int i=1;i<=10;i++)
//	{
//		cout <<"Put ten integer :" << i << " ------ ";
//	
//		cin>>x[i];
////	
//
//		cout <<" your value is  :" << x[i] << endl;
//
//	sum= sum + x[i];
//	}
//	cout <<"Sum = "<<sum;
//}
//
//int max()
//{
//	int max=0;
//	int x[10];
//
//	for (int i=1;i<=15;i++)
//	{
//		if (x[i]<x[i+1])
//		{
//			max=x[i+i];
//		}
//	}
//	cout <<"\nMaximum = "<<max;
//}
//
//
//int main()
//{
//	sum();
////	max();
//}
