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
