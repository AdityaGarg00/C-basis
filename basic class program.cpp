//basic class program
#include<iostream>
using namespace std;
int sum();
class rect
{
	int x,y,z,s;
	public:
		int sum()
		{
			cout <<"Enter the 3 no.s";
			cin >>x>>y>>z;
			s=x+y+z;
			cout<<s;
		}
};
int main()
{
	rect a;
	a.sum();
	return 0;
	
}
