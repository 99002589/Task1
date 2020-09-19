#include<myfn.h>

void main()
{
  printf("Enter a string \n");
  char str[100];
  int i=0, factorial=0,binary=0,hex=0,oct=0;

  do
  {
    scanf("%c",&str[i]);
  }while(str[i]!='\0');

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
  else if(primeno(no)==0)
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

  factorial=fact(no);
  if(factorial>0)
  {
    printf("The factorial for the given number is %d \n",factorial);
  }
  else
  {
    printf("The factorial for the given number is not available \n");
  }

  if(!SumOfPrimes(no))
  {
    printf("The number cannot be expressed as sum of 2 prime numbers \n");
  }

  /* Soruce: https://www.javatpoint.com/c-program-to-convert-decimal-to-binary */
  printf("Binary Equivalent \t");
  binary=dec2bin(no);
  printf("\n");

  /* source: https://www.geeksforgeeks.org/program-decimal-hexadecimal-conversion */
  printf("Hexa Decimal Equivalent \t");
  hex=dec2hex(no);
  printf("\n");

  oct=dec2hex(no);
  printf("Octal Equivalent \t %d \n",oct);

  int expPow=power(no,10);
  printf(" The given number raised to power of 10 is given as %d",expPow);

  int abs=absolute(no);
  printf(" The absolute value of the given number is %d",abs);
}
