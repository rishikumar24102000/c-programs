/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{
    for(int i =1; i<=5; i++)
    {
        for(int j = 5; j>=i ; j--)
        {
            printf("%d",6-j);
        }
        printf("\n");
    }
    
    return 0;
}
    

