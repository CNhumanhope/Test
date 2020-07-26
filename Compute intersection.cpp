#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int M=50,N=50;
	int a[M],b[N],c[N];
	int m,n,mn=0,*pa,*pb,*pc;
	cout<<"输入数组a中元素个数："<<endl;
	cin>>m;
	cout<<"输入数组b中元素个数："<<endl;
	cin>>n;
	for(pa=a;pa<a+m;pa++)
		cin>>*pa;
	for(pb=b;pb<b+n;pb++)
		cin>>*pb;
	for(pa=a,pc=c;pa<a+m;pa++)
		for(pb=b;pb<b+n;pb++)
			if(*pa==*pb)
			{
				*pc++=*pa;
				mn++;
				break;
			}
			cout<<"交集c的个元素依次为："<<endl;
			for(pc=c;pc<c+mn;pc++)
				cout<<setw(3)<<*pc;
			system("pause");
			return 0;
}