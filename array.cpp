#include<iostream>
using namespace std;
int main()
{
	int a[10],i,max;
	cout<<" ������10�������ֵ��\n";
		for(i=0;i<10;i++)
			cin>>a[i];
		max=a[0];
		for(i=0;i<10;i++)
			if(a[i]>max)
				max=a[i];
		for(i=0;i<10;i++)
			cout<<a[i]<<' ';
		cout<<endl;
		for(i=0;i<10;i++)
			if(max==a[i])
				cout<<"���ֵ��"<<a[i]<<'\t'<<"�±�"<<i<<endl;
		system("pause");
		return 0;
}