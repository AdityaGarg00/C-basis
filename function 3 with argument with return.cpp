////  with argument with return
#include<iostream>
using namespace std;
int sum(int a,int b);
int main()
{
	int c;
	cout <<"value of A is 30 and Value of B is 20 and there sum is :";
	c=sum(20,30);
	cout <<c;
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return (c);
}


