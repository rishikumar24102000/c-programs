/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int rev(int a)
{
    int b=0;
    int c=a;
    int length=0;
    for(int i=0;c>0;i++)
    {
        length++;
        c=c/10;
        
    }
    for(int i=0;i<length;i++)
    {
        int mod=a%10;
        a=a/10;
        b=(b*10)+mod;
    }
    return b;
}
int main()
{
    int n=0;
    int a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        b=rev(a);
        printf ("%d\n",b);
        
        
        if(b==a)
        {
            printf("palindrome\n");
        }
        else
        {
            printf("not palindrome\n");
        }
    }
    return 0;
}
