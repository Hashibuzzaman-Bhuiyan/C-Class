#include<stdio.h>
void main()
{
    int y,a,b,c;
    printf("Enter year");
    scanf("%d",&y);
    a=y%400;
    b=y%4;
    c=y%100;
    if((a==0)||(b==0)&&(c!=0))

    printf("Leap year");
else
    printf("Not Leap Year");

}