#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n , k ;
	cin>>n;
	cin>>k;
	int a[n] ;
	for(int i=0;i<n;i++)
	{
	a[i]=i+1;
	}
	double x=0 , y=0 , sumx=0 , sumy=0 ;
	for(int i=0;i<n;i++)
	{
		if(a[i]%k==0)
		{
			sumx+=a[i];
			x++;
		}
		else
		{
			sumy+=a[i];
			y++;
		}
	}
	printf("%.1f %.1f" , sumx/x, sumy/y);
	return 0;
}

