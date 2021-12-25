#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int x , d ;
	cin>>x;
	d=0;
	for( int i =x;i>=1;i/=2)
	{
		d++;
	}
	cout<<d<<endl;
	return 0;
}

