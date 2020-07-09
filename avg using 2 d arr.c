/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sum(int* a)
{
    int sum=0;
    for(int i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}



int main()
{
    int arr[2][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10}
 
    };
    
    for(int i = 0 ; i < 2; i++)
    {
        int length = sizeof(arr[i])/sizeof(int);
        
        int avg = sum(arr[i])/length;
        
        printf("%d\n",avg);
    }

    return 0;
}
