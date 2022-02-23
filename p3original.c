#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the number:\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int i,c=0;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
      c++;
  }
  return c;
}
void output(int n, int is_prime)
{
  if(is_prime>2)
    printf("The number %d is not a prime number\n",n);
  else
    printf("The number %d is a prime number\n",n);
}
int main()
{
  int n=input_number();
  int p=is_prime(n);
  output(n,p);
  return 0;
}