#include<stdio.h>
float cel(float x);
void main()
{
float c,f;
printf("Enter value");
scanf("%f",&c);
f=cel(c);
printf("Farenheit is %f",f);
}
float cel(float x)
{
float y;
y=(9*x+160)/5;
return y;
}