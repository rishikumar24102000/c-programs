/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int max(int* a)
{  
    int m=0;
    for(int i=0;i<=4;i++)
    {
        if(a[i]>m)
        {
            m = a[i];
        }
    }
    return m;
}
int main()
{
    int a[]={1,2,3,5,4};
    int m=max(a);
    
    printf("%d",m);
    return 0;
}
