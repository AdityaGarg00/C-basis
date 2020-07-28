//////// Basic class program 
#include<iostream>
using namespace std;
class rect
{
	private :
		int l,b,a;
	public:
		void input()
		{
			cout <<"enter the value of length";
			cin >>l;
			cout <<"enter the value of breadth";
			cin >>b;
		};
		void output()
		{
			a=l*b;
			cout <<"area of rectangle is :"<<a;
		};
};
int  main()
{	

	rect x;
	x.input();
	x.output();	
}
