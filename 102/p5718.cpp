#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int i , n , j , a[10001] , temp;	//i,jΪ�Ǳ������nΪ����������a[10001]Ϊ�������顢tempΪ��ʱ���� 
	cin>>n;
	for(i=0;i<n-1;i++)	//���Ǳ������Ϊ��������-1�� 
	{
		cin>>a[i];	//�������ݡ� 
	}
	for(i=n;i>1;i--)	//����n-1�ֱȽ� 
	{
		for(j=0;j<i;j++)	 
		{
			if(a[j]>a[j+1]) 	//�Ƚ� 
			{
				temp=a[j];		/*����˳�� */
				a[j]=a[j+1];	/*����˳�� */
				a[j+1]=temp;	/*����˳�� */
			}
		}
	}
	cout<<a[j]<<endl;			//������ĿҪ������� 
	return 0;
}
