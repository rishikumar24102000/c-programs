/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    int sum=0;
    while(a>0){
    b=a%10;
    a=a/10;
    if(b == 4 || b==6 || b==9 ||b==0)
        sum=1+sum;
    if(b == 8)
        sum=2+sum;
    }
    printf("%d",sum);

    return 0;
}
