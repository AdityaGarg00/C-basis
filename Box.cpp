#include<iostream>

using namespace std;

int main()
{
	int size=0;
	cout <<"enter the size:" <<endl;
	cin >>size;
	
	for(int i=0;i!=size;i++)
	{
		for(int j=0;j!=size;j++)
		{
		 	if(i==0 || i==size-1 || j==0 || j==size-1)
		 	{
		 		cout <<"#"<<" ";
			}
			else
			{
				cout <<"  ";
			}
		}
		cout <<endl;
	}
}
