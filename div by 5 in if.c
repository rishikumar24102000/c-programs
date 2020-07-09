/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<101;i++)
    {
        if(i%5==0)
        {
            printf("%d\n",i);
        }
    }
    

    return 0;
}
