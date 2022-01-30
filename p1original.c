#include <stdio.h>

int input(int *a, int *b)
{
  printf("Enter number: ");
  scanf("%d%d",a,b);
}

int add(int a,int b,int *c)
{
  *c=a+b;
}

void output(int a,int b,int c)
{
  printf("Sum of %d and %d is: %d\n",a,b,c);
}

int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}