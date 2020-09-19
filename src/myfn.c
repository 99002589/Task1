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
  int i;
  if(no==1)
    return 2;
  else if(no>1)
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
  else if(no<1)
  {
    return 0;
  }

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
  int rev=0, tmp=0,rem=0;
  tmp=no;
  while(tmp>0)
  {
    rem=tmp%10;
    rev=(rev*10)+rem;
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
  int tmp=0,sum=0,rem=0;
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

int fact(int no)
{
  if(no==0)
    return 1;
  else if(no==1)
    return 1;
  else if(no>1)
    return no*(fact(no-1));
  else
    return -1;
}

int SumOfPrimes(int no)
{
  int i=0,flag=0;
  for(i=2;i<=no/2;++i)
  {
    if (primeno(i)==1)
    {
      if (primeno(no-i)==1)
      {
        printf("The number can be expressed as sum of 2 prime numbers \t");
        printf("%d = %d + %d \n", no, i, no-i);
        flag=1;
        return flag;
      }
    }
  }
  return flag;
}

  int dec2bin(int no)
  {
    int i,j,val=0;
    int a[10];
    for(i=0;no>0;i++)
    {
      a[i]=no%2;
      no=no/2;
    }
    j=i-1;
    for(j;j>=0;--j)
    {
      val+=a[i]*(power(10,i-1));
    }
    return val;
  }

  int dec2hex(int no)
  {
    char hexaDeciNum[100];
    int i = 0,temp=0,val=0,j=0;
    while(no!=0)
    {
        int temp  = 0;
        temp = no % 16;
        if(temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        no = no/16;
    }
    for(j=i-1;j>=0;j--)
    {
      val+=hexaDeciNum[i]*power(10,(j-1));
    }

    /*for(int j=i-1; j>=0; j--)
    cout << hexaDeciNum[j];*/
    return val;
  }

  int dec2oct(int no)
  {
    int octalNumber = 0, i = 1;
    while (no != 0)
    {
        octalNumber += (no % 8) * i;
        no /= 8;
        i *= 10;
    }
    return octalNumber;
  }

  int power(int base, int a)
  {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
  }

  int absolute(int no)
  {
    if(no>=0)
    {
      return no;
    }
    else if(no<0)
    {
      return (no*(-1));
    }
  }
