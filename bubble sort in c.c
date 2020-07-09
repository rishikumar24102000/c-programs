#include <stdio.h>
int bubble(int* a)
{
    int i=0;
    for(i;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(a[j]<a[j-1])
            {
                int c=a[j];
                a[j]=a[j-1];
                a[j-1]= c;
            }
        }
        
    }
    return 0;
    
}


int main()
{
    int a[]={1,5,3,8,7,9};
    bubble(a);
    for(int i=0;i<=5;i++)
    printf("%d",a[i]);

    return 0;
}
