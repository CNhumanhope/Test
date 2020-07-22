#include<iostream>
using namespace std;
int main()
{
	const int N=10;
	int r[N];
	int i,low,high,find=0,key,mid;
	cout<<"请按从小到大的次序输入N个整数："<<endl;
	for(i=0;i<10;i++)
		cin>>r[i];
	cout<<"请输入要查找的数：";
	cin>>key;
	low=0;
	high=N-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==r[mid])
		{
			find=1;break;}
		else if(key<r[mid])
			high=mid-1;
		else if(key>r[mid])
			low=mid+1;
	}
	if(find==1)
		cout<<"所找的数据在数组第"<<mid+1<<"位\n";
	else cout<<"所找数据不在数组中\n";
	system("pause");
	return 0;
}
