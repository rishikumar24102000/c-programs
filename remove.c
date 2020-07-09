#include <stdio.h>
int pop(int* a,int n, int index)
{
    for(int i=index;i<n;i++)
    {
        a[i]=a[i+1];
        
    }
    return 0;
}
int removenum(int* a,int n,int number)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==number)
        {
            pop(a,n,i);
            n=n-1;
        }
    }
    return n;
}

int main()
{
    int a[] = {1,2,3,2,3,5}; 
    int n = 6;
    int number;
    scanf("%d",&number);
    n=removenum(a,n,number);
    
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
