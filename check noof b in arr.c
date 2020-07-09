/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

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
    
    
    
    
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(b==a[i])
        {
            count++;
        }
        
    }
    printf("%d",count);
    


    return 0;
}
