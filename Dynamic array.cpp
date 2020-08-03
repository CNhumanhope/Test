#include<iostream>
using namespace std;
int main()
{
	int n,x=2,decNum,i,a;
	cout<<"请输入要转换的二进制的位数：";
	cin>>n;
	char *p=new char[n+1];
	if(p==0)
	{
		cout<<"Error!"<<endl;
		return -1;
	}
	cout<<"输入转换的二进制数：";
	cin>>p;
	decNum=0;
	for(i=0;i<n;i++)
	{
		a=p[i]-'0';
		decNum=decNum*x+a;
	}
	cout<<"二进制序列（"<<p<<")的值为："<<decNum<<endl;
	system("pause");
	return 0;
}