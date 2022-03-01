#include<stdio.h>
int input()
{
  int n;
  printf("Enter the number:\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int f=0,f1=1,s,i;
  if(n<=1)
    return n;
  for(i=2;i<=n;i++)
  {
    s=f+f1;
    f=f1;
    f1=s;
  }
  return s;
}
void output(int n, int fibo)
{
  printf("The %dth number in fibonacci sequence is %d\n",n,fibo);
}
int main()
{
  int n=input();
  int f=find_fibo(n);
  output(n,f);
  return 0;
}