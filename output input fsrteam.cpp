#include <iostream>
#include<fstream>
#include<conio.h>

using namespace std;

ifstream fin("input.txt");       //can write anything at place of (fin)
ofstream out("output.txt");      //can write anything at place of (out)


int main()
{
	char i = getche();
	char num;
	while(!fin.eof())
	{
	
	fin >> num;
	cout << num <<" " " ";
		out <<num;
}
    cout <<"char entered is:"<<i;
	getch();
	return 0;
}
