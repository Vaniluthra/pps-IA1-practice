#include <stdio.h>

void input_2_strng(char *a,char *b)
{
  printf("Enter 1st word: ");
  scanf("%s",a);
  printf("Enter 2nd word: ");
  scanf("%s",b);
}

int cmp(char *a,char *b)
{
  int i=0,res;
  
  while(a[i]!='\0' && b[i]!='\0')
  {
    if(a[i]>b[i])
    {
      res=-1;
      break;
    }
    else if(b[i]>a[i])
    {
      res=1;
      break;
    }
    else    
    {
      i++;
    }
  }
  
  if(a[i]=='\0')
  {
    res=1;
  }
  
  else if(b[i]=='\0')
  {
    res=-1;
  }
  
  if(a[i]=='\0' && b[i]=='\0')
  {
    res=0;
  }
  
  return res;
}

void out(char *a,char *b,int res)
{
  if(res==-1)
  {
    printf("%s is greater than %s\n",a,b);
  }
  if(res==1)
  {
    printf("%s is greater than %s\n",b,a);
  }
  if(res==0)
  {
    printf("%s is equal to %s\n",a,b);
  }
}

int main()
{
  char x[20],y[20];
  int val;
  input_2_strng(x,y);
  val=cmp(x,y);
  out(x,y,val);
  return 0;
}
