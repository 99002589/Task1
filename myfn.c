#include<myfn.h>

int odd(int no)
{
  if(no%2==0)
    return 0;
  else
    return 1;
}

int primeno(int no)
{
  for(i=2;i<=(no/2);++i)
  {
    if(no%i==0)
    {
      return 0;
    }
  }
  return 1;
}

int symbol(int no)
{
  if(no>0)
    return 1;
  else if(no<0)
    return -1;
  else if(no==0)
    return 0;
}

int palindrome(int no)
{
  int rev=0, tmp=0, rem=0;
  tmp=no;
  while(tmp>0)
  {
    rem=tmp%10;
    rev=(rev*10)+10;
    tmp=tmp/10;
  }
  if(no==rev)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int armstrong(int no)
{
  int tmp=0,sum=0;
  tmp=no;
  while(tmp>0)
  {
    rem=tmp%10;
    sum=sum+(rem*rem*rem);
    tmp=tmp/10;
  }
  if(sum==no)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}



}
