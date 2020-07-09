

#include <stdio.h>

int main()
{
    int a[10],i;
    
    for(i=0; i<10; i++)
    {
        printf("enter:");
        scanf("%d\n",&a[i]);
    }
    for(i=0;i < 10;i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}
