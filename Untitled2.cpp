#include<stdio.h>
int Fib(int x, int y)
{ return y,x+y;
}
int main()
{ int x1 = 0;
  int x2 = 1; 
  printf("x1,x2"); 
  for(int i = 0;i<4;i++)     
  { x1, x2 = Fib(x1,x2);
    printf("x2");     
  }
}
