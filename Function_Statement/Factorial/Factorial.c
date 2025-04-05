#include<stdio.h>
long fact(int n);
void main()
{
int number;
long factorial;
printf("Enter Number");
scanf("%d",&number);
factorial=fact(number);
printf("Factorial is %d",factorial);
}
long fact(int n)
{
int c;
long s=1;
for(c=1;c<=n;c++)
{
s=s*c;
}
return s;
}