#include<stdio.h>
void main()
{
    int m;
    printf("Enter Mark :");
    scanf("%d",&m);

    if((m>=80)&&(m<=100))
    printf("A+");
    else if((m>=70)&&(m<80))
    printf("A");
    else if((m>=60)&&(m<70))
    printf("A-");
    else if((m>=50)&&(m<60))
    printf("B");
    else if((m>=40)&&(m<50))
    printf("C");
    else if((m>=33)&&(m<40))
    printf("D");
    else if((m>=0)&&(m<33))
    printf("F");
    else
    printf("Invalid Number");

}