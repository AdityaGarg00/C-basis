//functions basic program
#include<iostream>
using namespace std;
class rect
{
	public:
		void asd()
		{
		cout<<"***********\n";
		friend int main();
		}
};
void rect::asd();
int main()
{
	rect ob;
	cout<<"name\n";
	ob.asd();
     cout<<"class\n";
	ob.asd();
    cout<<"roll no\n";
	ob.asd();
    cout<<"strem\n";
	ob.asd();

		
}
