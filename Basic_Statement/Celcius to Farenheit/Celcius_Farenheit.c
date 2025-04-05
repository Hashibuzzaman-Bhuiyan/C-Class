#include<stdio.h>
void main()
{
    float celsius,farenheit;
    printf("Enter Temperature in celcius");
    scanf("%f",&celsius);

   farenheit=((celsius*9)/5)+32;

   printf("Temperature in farenheit is %f F\n" , farenheit);
}