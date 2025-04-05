#include<stdio.h.>
void main()
{
    int a,b,c;
    printf("Enter 3 number");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("Largest is %d",a);
    else if((b>a)&&(b>c))
    printf("Largest is %d",b);
    else
    printf("largest is %d",c);
}