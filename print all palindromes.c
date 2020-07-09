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
    for(int a=11;a<1001;a++)
    {
        int b = rev(a);
        if(b==a)
        {
            printf("%d\n",a);
        }
        
    }
    return 0;
}
