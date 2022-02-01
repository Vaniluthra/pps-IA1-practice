#include <stdio.h>

int input()
{
  int n;
  printf("Enter number of values: ");
  scanf("%d",&n);
  return n;

}

void inputarray(int n,int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("Enter number: ");
    scanf("%d",&a[i]);
  }

}

int sumaray(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=a[i];
  }
  return sum;
}

void output(int n,int a[n],int sum)
{
  printf("Sum of: ");
  for(int i=0;i<n-1;i++)
  {
    printf("%d, ",a[i]);
   
  }
  printf("%d is: %d\n",a[n-1],sum);
}

int main()
{
  int a,sum;
  a=input();
  int b[a];
  inputarray(a,b);
  sum=sumaray(a,b);
  output(a,b,sum);
  return 0;
}