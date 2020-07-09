/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<11;i++)
    {
        if(i%2==0)
        {
            printf("%d is even\n",i);
        }
        else
        {
            printf("%d is odd\n",i);
        }
    }

    return 0;
}
