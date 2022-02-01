#include <stdio.h>

void input(int *a, int *b)
{
  printf("Enter number: ");
  scanf("%d%d",a,b);
}

void add(int a,int b,int *c)
{
  *c=a+b;
}

void output(int a,int b,int c)
{
  printf("Sum of %d and %d is: %d\n",a,b,c);
}

void main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}