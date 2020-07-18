#include<iostream>
using namespace std;
int main()
{
	int i,n;
	double score,sum,avg;
	sum=0;
	cout<<"输入评委个数"<<endl;
	cin>>n;
	cout<<"输入n个评委的评分"<<endl;
	i=1;
	do
	{
		cin>>score;
		sum+=score;
		i++;
	}while(i<=n);
	avg=sum/n;
	cout<<"选手最终得分为："<<avg<<endl;
	system("pause");
	return 0;
}