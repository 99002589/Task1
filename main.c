#include<myfn.h>

void main()
{
  printf("Enter a string \n");
  char str[100];
  int i=0;

  do
  {
    scanf("%d",&ch[i]);
  }while(ch[i]!='\0');

  printf("Enter a number \n");
  int no=0;
  scanf("%d",&no);

  if(odd(no)==1) // if odd fn gives 1 --> it is odd no
  {
    printf("Odd Number \n");
  }
  else //  if odd fn gives 0 --> it is odd no
  {
    printf("Even Number \n");
  }

  if(primeno(no)==1)
  {
    printf("Prime Number \n");
  }
  else
  {
    printf("Composite Number \n");
  }

  if(symbol(no)==1)
  {
    printf("Positive Number \n");
  }
  else if(symbol(no)==-1)
  {
    printf("Negative Number \n");
  }
  else if(symbol(no)==0)
  {
    printf("Zero \n");
  }

  if(armstrong(no)==1)
  {
    printf("Armstrong Number \n");
  }
  else
  {
    printf("Not an Armstrong Number \n");
  }

  if(palindrome(no))
  {
    printf("Palindrome Number \n");
  }
  else
  {
    printf("Not a Palindrome Number \n");
  }







}
