#include<stdio.h>
int min(int*a)
{
    int m=a[0];
    for(int i=0;i<=4;i++)
    {
        if(a[i]<m)
        {
            m=a[i]-m;
        }
    }
    return m;
}
int main()
{   
    int a[]={1,2,3,4,5};
    int m= min(a);
    printf("%d",m);
    return 0;
}