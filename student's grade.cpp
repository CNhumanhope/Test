#include<iostream>
using namespace std;
int main()
{
	const int N=4;
	const int M=3;
	double a[N][M+1],b[N],temp;
	int i,j,max;
	cout<<"�������ĸ�ѧ���ɼ���"<<endl;
	for(i=0;i<N;i++)
	{
		cout<<"������ѧ��Ϊ0"<<i+1<<"��ѧ�������Ӣ�ɼ������������룩��";
		for(j=0;j<M;j++)
			cin>>a[i][j];
	}
	for(i=0;i<N;i++)
	{
		a[i][M]=a[i][0];
		for(j=1;j<M;j++)
			a[i][M]+=a[i][j];
	}
	for(i=0;i<N;i++)
		b[i]=a[i][3];
	for(i=0;i<N-1;i++)
	{
		max=i;
		for(j=i+1;j<N;j++)
			if(b[j]>b[max])
				max=j;
		temp=b[i];b[i]=b[max];b[max]=temp;
	}
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			if(b[i]==a[j][3])
				cout<<"��"<<i+1<<"��ͬѧѧ��Ϊ��0"<<j+1<<"  "<<"���ܷ�Ϊ��"<<b[i]<<endl;
	system("pause");
	return 0;
}