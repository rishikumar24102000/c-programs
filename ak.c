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
    for(i=0;n>0;i++)
        if(n>4)n-=4;else n-=1;
                    
    i%2 ? printf("Yes") : printf("No");

    return 0;
}
