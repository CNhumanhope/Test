#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int fib1=1,fib2=1,fib3,n;
	cout<<setw(5)<<fib1<<setw(5)<<fib2;
	for(n=3;n<=20;n++)
	{
		fib3=fib2+fib1;
		cout<<setw(5)<<fib3;
		if(n%5==0)
			cout<<endl;
		fib1=fib2;
		fib2=fib3;
	}
	system("pause");
	return 0;
}