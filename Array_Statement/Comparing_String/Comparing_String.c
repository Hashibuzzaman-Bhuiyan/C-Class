#include<stdio.h>
#include<string.h>
void main()
{
    char n1[80],n2[80];
    int t;
    printf("Enter first String");
    scanf("%s",n1);
    printf("Enter second String");
    scanf("%s",n2);
    t=strcmp(n1,n2);
    if(t==0)
    printf("Number of both is Equal");
    else if(t>0)
    printf("First string %s is larger than second string %s",n1,n2);
    else
    printf("Second string %s is larger than first string %s",n2,n1);
}
