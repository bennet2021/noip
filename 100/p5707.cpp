#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int s , v , h , m ;
	double i;
	cin>>s>>v;
	i=(double)s/(double)v ;
	if (i>(int)i)
	{
		(int)i++;
	}
	else
	{
		i=(int)i;
	}
	i+=10;
	h=8;
	m=0;
	m-=i;
	if (m<0)
	{
		while(m<0)
		{
			m+=60;
			h-=1;
			if(h<0)
			{
				h+=24;
			}
		}
	}
	if(h<10&&m<10)
	{
		cout<<0<<h<<":0"<<m<<endl;
	}
	else if ( h<10&&m>=10)
	{
		cout<<0<<h<<":"<<m<<endl;
	}
	else if (h>=10&&m<10)
	{
		cout<<h<<":0"<<m<<endl;
	}
	else
	{
		cout<<h<<":"<<m<<endl;
	}
	return 0;
}
