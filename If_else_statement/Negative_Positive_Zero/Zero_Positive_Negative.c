#include<stdio.h>
void main()
{
 int a;
 printf("Enter a number");
 scanf("%d",&a);
 if(a==0)
 printf("The number is Zero");
 else if(a>0)
 printf("The number is Positive");
 else
 printf("The number is Negative");
}