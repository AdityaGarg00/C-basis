//function With argument without return
#include<iostream>
using namespace std;
void add(int a,int b);
int main()
{
	add(10,20);
	
}
void add(int a,int b)
{
	int c;
	c=a+b;
	cout <<c;
}
