c#include <stdio.h>
#include <math.h>
int main()
{
    int a,check=1;
    scanf("%d",&a);
    for(int i=2;i<sqrt(a);i++)
    {
        if(a%i==0)
        {
            check = 0;
            break;
        }
    }
    check ? printf("prime") : printf("not a prime");
    

    return 0;
}
