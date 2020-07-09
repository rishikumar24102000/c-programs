#include<stdio.h>
int main()
{
    int a[] = {1,2,3,2,1};
    int i;
    int n = sizeof(a)/sizeof(int);
    
    for (i=0;i<n/2;i++)
    {
        if(a[i] != a[n-1-i])
        {
            printf("Not palindrome");
            break;
        }
    }
    if(i==n/2)
    {
        printf("palindrome");
    }
    return 0;
}