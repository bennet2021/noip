#include <bits/stdc++.h>
using namespace std ;
int main()
{
	double i=0 , n=0 ;
	cin>>i;
	if(i<=150)
	{
		n=i*0.4463;
	}
	if(i<=400)
	{
		n=150*0.4463+(i-150)*0.4663;
	}
	if(i>400)
	{
		n=150*0.4463+250*0.4663+(i-400)*0.5663;
	}
	printf ("%.1lf",n);
	return 0;
}

