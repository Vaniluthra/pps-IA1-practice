#include <stdio.h>

int input()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  return n;
}

int res(int n)
{
  int i,res=0;
  for(i=1;i<=n;i++)
  {
    res=res+i;
  }
  return res;
}

int output(int n,int res)
{
  printf("Sum of all numbers till %d is: %d\n",n,res);
}

int main()
{
  int a,sum;
  a=input();
  sum=res(a);
  output(a,sum);
  return 0;
}