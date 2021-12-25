#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	int a , b , c , d , e , f;
	cin>>a>>b;
	cin>>c>>d;
	if( d-b < 0)
	{
		f=d+60-b;
		e=c-a-1;
	}
	if( d-b > 0)
	{
		f=d-b;
		e=c-a;
	}
	cout<<e<<" "<<f<<endl;
	return 0;
}
