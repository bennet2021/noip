#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int T;
    const double pi=3.141593;
    cin >> T;
    if (T == 1) 
	{
        cout << "I love Luogu!";
    }
	else if (T == 2) 
	{
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } 
	else if (T == 3) 
	{
		cout<<14/4<<endl;
		cout<<14/4*4<<endl;
		cout<<14%4<<endl;
    }
	else if (T == 4) 
	{
		printf  ("%.3f\n", 500.0/3.0);
    }
	else if (T == 5) 
	{
		cout<<(220+260)/(12+20)<<endl;
		
    } 
	else if (T == 6) 
	{
		cout<<sqrt(6*6+9*9)<<endl;
    } 
	else if (T == 7) 
	{
		cout<<100+10<<endl;
		cout<<100+10-20<<endl;
		cout<<100+10-20-90<<endl;
    } 
	else if (T == 8) 
	{
		cout<<1.0*2*5*pi<<endl;
		cout<<1.0*5*5*pi<<endl;
		cout<<1.0*4/3*125*pi<<endl;
    } 
	else if (T == 9) 
	{
		cout<<(((1+1)*2+1)*2+1)*2<<endl;
    } 
	else if (T == 10) 
	{
		cout<<9<<endl;
    } 
	else if (T == 11) 
	{
		cout<<1.0*100/(8-5)<<endl;
    } 
	else if (T == 12) 
	{
	cout<<(int)('M'-'A')+1<<endl;
	cout<<(char)(18+'A'-1);
    } 
	else if (T == 13) 
	{
		cout<<(int)(pow(1.0*4/3*pi*(4*4*4+10*10*10),1.0*1/3))<<endl;
    } 
	else if (T == 14) 
	{
		cout<<50<<endl;
    }
    return 0;
}
