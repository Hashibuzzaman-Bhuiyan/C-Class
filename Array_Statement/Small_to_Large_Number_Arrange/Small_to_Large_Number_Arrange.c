#include<stdio.h>
void main()
{
    int n=10,c,k,t,a[10];
    for(c=0;c<n;c++)
    {
        printf("Enter Data");
        scanf("%d",&a[c]);
    }
    for(c=0;c<n;c++)
    {
        for(k=c+1;k<n;k++)
        {
            if(a[c]>a[k])
            {
                t=a[c];
                a[c]=a[k];
                a[k]=t;
            }
        }
    }
    for(c=0;c<n;c++)
printf("%d\n",a[c]);
}