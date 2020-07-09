/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int removal(int* a,int n,int num)
{
    
    
    for(int i=0;i<n;i++)
    {
        
        if(a[i]==num)
        {
            a[i]=a[i]-num;
            
        }
        
        
    }
    n=n-num;
    
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}

int main()
{
    int a[]={1,2,3,2,3};
    int n=5;
    int num;
    scanf("%d",&num);
    removal(a,n,num);
    
    return 0;
}
