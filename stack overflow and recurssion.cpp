#include <iostream> 
#include <stdlib.h> 
using namespace std; 

fun(int x) 
{
	if (x==0)
		return(0);
	else{
		cout <<"adi";
	    fun(x-1);
		cout <<"for geeks";
	}

}
int main() 
{ 
int i =1;
 	fun(3);
 	main(); 
} 

