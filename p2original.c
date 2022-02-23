#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enetr the coordinates of the triangle:\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,x3);
}
float is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float dis=0.0,dis1=0.0,dis2=0.0,s,a;
  dis=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
  dis1=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
  dis2=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
  s=(dis+dis1+dis2)/2.0;
  a=sqrt(s((s-dis)+(s-dis1)+(s-dis2)));
  return a;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if()
}
int main()
{
  
  return 0;
}
