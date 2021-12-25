#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) 
{
	int a , b , c ,  d , x ;
	a=b=c=d=0;
	cin>>x ;
	if(x%2==0 && 4<x && x<=12)
	{
		a=1;
	}
	if ( x % 2 ==0 || (4 < x && x <= 12 ))
	{
		b=1;
		if (!(x%2==0 && 4<x && x<=12 ))
		{
			c=1;
		}
	}
	if(!(x%2==0) && !(4<x && x<=12))
	{
		d=1;
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
}
