#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int a , b , c ;
	cin>>a>>b;
	if( a%4 == 0 && a%100 !=0 || a%400 == 0)
	{
		if( b==1 || b==3||b==5||b==7||b==8||b==10||b==12)
		{
			c=31;
		}
		if( b==4||b==6||b==9||b==11)
		{
			c=30;
		}
		if( b==2)
		{
			c=29;
		}
	}
	if(!( a%4 == 0 && a%100 !=0 || a%400 == 0))
	{
		if( b==1 || b==3||b==5||b==7||b==8||b==10||b==12)
		{
			c=31;
		}
		if( b==4||b==6||b==9||b==11)
		{
			c=30;
		}
		if( b==2)
		{
			c=28;
		}	
	}
	cout<<c<<endl;
 return 0;
}

