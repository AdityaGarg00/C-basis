//basic constructor program
#include<iostream>
using namespace std;
int sum();
class rect
{	static int x;
	int y,z;
	public:
		int sum()
		{
			cout <<"Enter the no.s\n";
			cin>>y>>z;
			cout<<(x+y+z);
		}		
};
int rect::x=20;
int main()
{
	rect a;
	a.sum();	
}
