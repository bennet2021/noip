#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n , s = 0 ;
	cin>>n;
	for(int i=1; i <=n;i++)
	{
		int t=1;
		for( int j = 1; j<=i;j++)
		{
			t*=j;
		}
		s+=t;
	}
	cout<<s<<endl;
	return 0;
}

