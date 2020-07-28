//// with return without argument
#include<iostream>
using namespace std;
int sum();
int main()
{
	int c;
	c=sum();
	cout <<c;
}
int sum()
{
	int a,b,c;
	cin>>a>>b;
	c=a+b;
	return (c);
}


