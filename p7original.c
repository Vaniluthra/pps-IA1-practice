#include <stdio.h>

typedef struct complex
{
  float real;
  float imaginary;
}complex;

complex input()
{
  complex c;
  printf("Enter real part: ");
  scanf("%f",&c.real);
  printf("Enter imaginary part: ");
  scanf("%f",&c.imaginary);
  return c;
}

complex add(complex a,complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}

void output(complex a,complex b,complex sum)
{
  printf("Sum of %0.2f+%0.2fi and %0.2f+%0.2fi is: %0.2f+%0.2fi\n",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}

int main()
{
  complex c1,c2,res;
  c1=input();
  c2=input();
  res=add(c1,c2);
  output(c1,c2,res);
  return 0;
}