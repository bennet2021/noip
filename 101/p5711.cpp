#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int a , b;
	cin>>a ;
	if( a%4 == 0 && a%100 !=0 || a%400 == 0)
	{
		b=1;
	}
	else 
	{
		b=0;
	}
	cout<<b<<endl;
return 0;
}

