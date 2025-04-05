#include<stdio.h>
#include<math.h>


void main()
{

float a,b,c,s,area;

printf("The value of first arm :");
scanf("%f",&a);
printf("The value of second arm :");
scanf("%f",&b);
printf("The value of third arm :");
scanf("%f",&c);

s=((a+b+c)/2);

area=sqrt((s)*(s-a)*(s-b)*(s-c));
printf("\n Area of triangle: %.2f\n",area);
}


