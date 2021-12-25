#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int i , n , j , a[10001] , temp;	//i,j为角标变量、n为数据数量、a[10001]为声明数组、temp为零时变量 
	cin>>n;
	for(i=0;i<n-1;i++)	//将角标个数设为数据数量-1。 
	{
		cin>>a[i];	//输入数据。 
	}
	for(i=n;i>1;i--)	//进行n-1轮比较 
	{
		for(j=0;j<i;j++)	 
		{
			if(a[j]>a[j+1]) 	//比较 
			{
				temp=a[j];		/*交换顺序 */
				a[j]=a[j+1];	/*交换顺序 */
				a[j+1]=temp;	/*交换顺序 */
			}
		}
	}
	cout<<a[j]<<endl;			//根据题目要求输出。 
	return 0;
}
