//program to calculate result
#include<iostream>
#include<conio.h>
using namespace std;
struct result
{
	char n[20];
	int age,fees,m1,m2,m3,m4,total;	
};
int main()
{
	result a;
	cout <<"enter the name";
	cin >>a.n;
	cout <<"enter the age";
	cin >>a.age;
	cout<<"enter the marks";
	cin >>a.m1>>a.m2>>a.m3>>a.m4;
    a.total=a.m1+a.m2+a.m3+a.m4;
	cout<<a.n <<" your total score is "<<a.total;
return(0);
}
