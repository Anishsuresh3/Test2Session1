#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the coordinates of the triangle:\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float dis=0.0,dis1=0.0,dis2=0.0,s,a;
  dis=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
  dis1=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
  dis2=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
  s=(dis+dis1+dis2)/2.0;
  a=sqrt(s*(s-dis)*(s-dis1)*(s-dis2));
  if(a)
    return 1;
  return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle)
  {
    printf("The given coordinates : (%f,%f),(%f,%f),(%f,%f) form a triangle\n",x1,y1,x2,y2,x3,y3);
  }
  else{
    printf("The given coordinates : (%f,%f),(%f,%f),(%f,%f) does not form a triangle\n",x1,y1,x2,y2,x3,y3);
  }
}
int main()
{
  float x1,x2,x3,y1,y2,y3;
  int istriangle;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}
