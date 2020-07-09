/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int reverseArr(int n,int* a)
{
    int b[n], i;
    for(int j=n-1,i=0;j>=0;i++,j--)
    {
        b[i]=a[j];
    }
    for( i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;

    
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverseArr(n,a);
    

    return 0;
}
