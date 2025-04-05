#include<stdio.h>
float tri(float x,float y);
void main()
{
float b,h,area;
printf("Enter Base anf Height");
scanf("%f%f",&b,&h);
area=tri(b,h);
printf("Area is %f",area);
}
float tri(float x,float y)
{
    float z;
    z=0.5*x*y;
    return z;
}