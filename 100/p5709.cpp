#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int m , t , s ,a;
	cin>>m>>t>>s;
	if (t==0)
	{
		cout<<0<<endl;
			return 0;
	}	
	else
	{
	a=m-(double)s/(double)t;
	}
	cout<<max(0,(int)a);
	return 0;
}
