#include<iostream>
using namespace std;
int main()
{
	int i,j;
	double r,s;
	for(i=1;i<=7;i++)
	{
		j=1;
		do{
			cout<<"Input r(r>0):";
			cin>>r;
			j++;
		}while(r<=0&&j<=3);
		if(r>0)
		{s=3.14*r*r;
		 cout<<"第"<<i<<"个圆r="<<r<<"s="<<s<<"\n";
		}
		else cout<<"第"<<i<<"个圆r error!"<<endl;
	}
	    system("pause");
		return 0;
}
