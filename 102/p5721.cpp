#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n , i;
	i=1;
	cin>>n;
	for ( int j=n;j>0;j--)
	{
		for(int x=1;x<=j;x++)
		{
		if(i<10)
		{
			cout<<0<<i;
		}
		else cout<<i; 
		i++;
		}
		cout<<endl;
	}
	return 0;
}

