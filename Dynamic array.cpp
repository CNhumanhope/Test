#include<iostream>
using namespace std;
int main()
{
	int n,x=2,decNum,i,a;
	cout<<"������Ҫת���Ķ����Ƶ�λ����";
	cin>>n;
	char *p=new char[n+1];
	if(p==0)
	{
		cout<<"Error!"<<endl;
		return -1;
	}
	cout<<"����ת���Ķ���������";
	cin>>p;
	decNum=0;
	for(i=0;i<n;i++)
	{
		a=p[i]-'0';
		decNum=decNum*x+a;
	}
	cout<<"���������У�"<<p<<")��ֵΪ��"<<decNum<<endl;
	system("pause");
	return 0;
}