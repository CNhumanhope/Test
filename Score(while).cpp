#include<iostream>
using namespace std;
int main()
{
	int i,n;
	double score,sum,avg;
	sum=0;
	cout<<"������ί����"<<endl;
	cin>>n;
	cout<<"����n����ί������"<<endl;
	i=1;
	while(i<=n)
	{
		cin>>score;
		sum+=score;
		i++;
	}
	avg=sum/n;
	cout<<"ѡ�����յ÷�Ϊ��"<<avg<<endl;
	system("pause");
	return 0;
}