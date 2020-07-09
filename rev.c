#include <stdio.h>
int rev(int a)
{
    int b=0;
    for(int i=0;a>0;i++)
    {
        int mod=a%10;
        a=a/10;
        b=(b*10)+mod;
    }
    return b;
}
int main()
{
    int a;
    scanf("%d",&a);
    int rev = rev(a);
    printf("%d",rev);
    return 0;
}
