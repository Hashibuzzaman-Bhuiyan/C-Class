#include<stdio.h>
void main()
{
    int n=5,c,i,f=0;
    int a[5]={22,18,25,9,35};
    printf("Enter data you do want to search :");
    scanf("%d",&i);
    for(c=0;c<n;c++)
    {
        if(a[c]==i)
        {
            printf("Item Found");
            f=1;
            break;
        }
    }
    if(f==0)
    printf("Item not Found");
}