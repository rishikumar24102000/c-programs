/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int pop(int* a,int n,int index)
{
    for(int i=index;i<n-1;i++)
    {
        a[i]=a[i]+1;
    }
    n=n-1;
    {
        for(int i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    }
    

    return 0;
}
int main()
{
    int a[]={1,2,3,4,5};
    int n=5;
    int index;
    scanf("%d",&index);
    pop(a,n,index);
return 0;
}
