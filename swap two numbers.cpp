//to swap two numbers
#include<iostream>
using namespace std;
int main()
{
        int x,y,z;
        cout <<"type the values of x:";
        cin >>x;
        cout <<"type value of y: ";
        cin >>y;
        // Code to swap 'x' and 'y' without using third variable
	x = x + y; 
	y = x - y; 
	x = x - y; 
        cout <<"new x is:"<<x<<endl;
        cout <<"new y is:"<<y;
}
