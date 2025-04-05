#include<stdio.h>
void main()
{
    int a;
    printf("Enter number between 0 to 3 :");
    scanf("%d",&a);
    if(a==0)
    printf("Zero");
    else if(a==1)
    printf("One");
    else if(a==2)
    printf("Two");
    else if(a==3)
    printf("Three");
    else
    printf("Unknown");

}