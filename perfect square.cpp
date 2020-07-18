#include<iostream>
using namespace std;
int main()
{
	int i,a,b,c,d,n;
	cout<<"形如aabb的四位完全平方数为：";
	for(i=10;i<=100;i++)
	{
		n=i*i;
		if(n>=1000 && n<10000)
		{a=n/1000;
		 b=n/100%10;
		 c=n/10%10;
		 d=n%10;
		 if(a==b && c==d)
		 {cout<<n<<" ";}
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}


