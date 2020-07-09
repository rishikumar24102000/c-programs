
#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int j=n-1,i=0  ;  j>=0  ;  j--,i++)
    {
        b[i]=a[j];
    }  
    
    for(int i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
