#include<stdio.h>
void main()
{
 int a,b,c,x;
 printf("Enter 3 number");
 scanf("%d%d%d",&a,&b,&c);
 x=a;
 if(x<b)
 x=b;
 else if(x<c)
 x=c;
 printf("Largest is %d",x);
}