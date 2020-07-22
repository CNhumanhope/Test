#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,k;
	for(i=0;i<10;i++)
		a[i]=rand()%100;
	cout<<"排序之前:\n";
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<'\t';
		if((i+1)%5==0)
			cout<<endl;
	}
	for(i=1;i<10;i++)
	{
		for(j=0;j<(10-i);j++)
			if(a[j]>a[j+1])
			{
				k=a[j+1];
				a[j+1]=a[j];
				a[j]=k;
			}
	}
	cout<<"排序之后:\n";
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<'\t';
		if((i+1)%5==0)
		cout<<endl;
	}
		system("pause");
		return 0;
}