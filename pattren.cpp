#include<iostream>
using namespace std;
int main()
{
	int i,j,x;
	cout <<"enter no of rows:";
	cin >>x;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout <<j;
		}
		cout <<"\n";
	} 

	for(i=x;i>=1;--i)
	{
		for(j=1;j<=i;++j)
		{
			cout <<i;
		}
		cout <<"\n";
	}
}
