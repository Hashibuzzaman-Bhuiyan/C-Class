#include<stdio.h>
void main()
{
    int n=5,c,k,t;
    int a[5]={22,18,25,9,35};
    for(c=0;c<n;c++)
    {
        for(k=c+1;k<n;k++)
        {
            if(a[c]<a[k])
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