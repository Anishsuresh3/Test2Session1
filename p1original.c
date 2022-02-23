#include<stdio.h>
#include<math.h>
void cord1(float *x1,float *y1)
{
    printf("Enter the 1st coordinates:\n");
    scanf("%f%f",x1,y1);
}
void cord2(float *x2,float *y2)
{
    printf("Enter the 2st coordinates:\n");
    scanf("%f%f",x2,y2);
}
void compute(float x1,float y1,float x2,float y2,float *dis)
{
  *dis=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
void output(float x1,float y1,float x2,float y2,float dis)
{
    printf("the distance between (%f,%f) and (%f,%f) is %f\n",x1,y1,x2,y2,dis);
}
int main()
{
    float x1,y1,x2,y2;
    float dis;
    cord1(&x1,&y1);
    cord2(&x2,&y2);
    compute(x1,y1,x2,y2,&dis);
    output(x1,y1,x2,y2,dis);
    return 0;
}