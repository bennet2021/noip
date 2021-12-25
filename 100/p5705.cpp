#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	float a,b,c,d,e ;
	cin>>a;
	b=(int) a/100;
	c=(int) a/10 % 10;
	d=(int) a % (int)(100*b+10*c);
	e=(int) (a*10) % (int)(1000*b+100*c+10*d);
    cout<<e+d*0.1+c*0.01+b*0.001;
	return 0;
}
