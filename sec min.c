/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
    
        {
            min=a[i];
        }
    }
    
    int min2=a[0];
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>min && a[i]<min2)
        {
            min2=a[i];
        }
        
    }
    printf("second minimum element=%d",min2);

    return 0;
}
