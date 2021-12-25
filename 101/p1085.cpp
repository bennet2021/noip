#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int a , b , i , s , day , m ;
	a=b=i=s=day=m=0;
	for(i=1;i<8;i++)
	{
		cin>>a>>b;
		s=a+b;
		if( s > m && s>8)
		{
			m=s;
			day=i;
		}
	}
	cout<<day<<endl;
	return 0;
}

