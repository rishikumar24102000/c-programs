#include<stdio.h>

int main()
{
    int n = 432;
    int sum=0;
    
    for(int i=0;n>0;i++)
    {
        int mod = n % 10;
        sum = sum + mod;
        n = n / 10;
    }
    printf("sum = %d", sum);
    
    return 0;
}