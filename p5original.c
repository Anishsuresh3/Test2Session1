#include<stdio.h>
#include<math.h>
int input_array_size()
{
    int n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    return n;
}
void init_array(int n,int a[n])
{
    int i;
    for(i=1;i<=n;i++)
        a[i-1]=i;
}
void erotosthenes_sieve(int n,int a[n])
{
    a[0]=0;
    for(int i=3;i<n;i++)
    {
      if(a[i]!=5 && a[i]!=7){
          if(a[i]%2==0 || a[i]%3==0 || a[i]%5==0 || a[i]%7==0)
              a[i]=0;
        }
    }
}
void erotosthenes_sieve1(int n,int a[n])
{
  a[0]=0;
  for(int i=1;i<sqrt(n);i++)
    {
      if(a[i]!=0){
        for(int k=a[i]*a[i];k<=n;k+=a[i])
          {
              a[k-1]=0;
          }
      }
    }
}
void out_put(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
          printf("%d\n",a[i]);
    }
}
int main()
{
    int n=input_array_size();
    int a[n];
    init_array(n,a);
    erotosthenes_sieve1(n,a);
    out_put(n,a);
    return 0;
}