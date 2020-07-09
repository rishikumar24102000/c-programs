#include <stdio.h>
int checkCount(int n,int *a,int b)
{
    
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(b==a[i])
        {
            count++;
        }
    }
    return count;
        
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[i];
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    
    int b;
    scanf("%d",&b);
    printf("%d",checkCount(n,a,b));
    

    return 0;
}
