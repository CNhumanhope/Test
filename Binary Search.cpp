#include<iostream>
using namespace std;
int main()
{
	const int N=10;
	int r[N];
	int i,low,high,find=0,key,mid;
	cout<<"�밴��С����Ĵ�������N��������"<<endl;
	for(i=0;i<10;i++)
		cin>>r[i];
	cout<<"������Ҫ���ҵ�����";
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
		cout<<"���ҵ������������"<<mid+1<<"λ\n";
	else cout<<"�������ݲ���������\n";
	system("pause");
	return 0;
}
