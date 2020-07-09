/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5};
    
    int length = sizeof(a)/sizeof(int);
    
    int sum = 0;
    for(int i=0; i<=4;i++)
    {
        sum = sum + a[i];
    }
    printf("sum = %d",sum);
    
    int avg = sum / length;
    
    printf("avg = %d",avg);
    return 0;
}
