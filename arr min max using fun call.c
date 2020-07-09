/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
 int min_max(int*a)
{

    int m=a[0];
    int n=a[0];
    

    for(int i=0;i<=4;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
        
        else
        {
            n=a[i];
        }
    }
    
    printf("min %d max %d",m,n);
}

int main()
{
    int a[]={1,2,3,4,5};
    min_max(a);
    return 0;
}
