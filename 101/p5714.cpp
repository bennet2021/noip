#include <bits/stdc++.h>
using namespace std ;
int main(int argc, char** argv) {
	double b , a ,c ;	//���� 
	cin>>a>>b;
	c=a/(b*b); 	//���� 
	if ( 18.5>c)	//�Ƚ� 
	{
		cout<<"Underweight"<<endl; 
	}
	if (18.5<=c&&c<24)
	{
		cout<<"Normal"<<endl;
	}
	if ( 24<=c) 
	{
		cout<<c<<endl;
		cout<<"Overweight"<<endl; 
	}
	return 0;
}
