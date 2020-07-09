#include <stdio.h>

int main()
{
    
    int a=3,b=2,c=1;
    if(a>b)
    {
        if(a>c)
        {
            printf("A");
        }
        else
        {
            printf("c");
        }
    }
    else
    {
        if(b>c)
        {
            printf("B");
        }
        else
        {
            printf("c");
        }
    }
    

    return 0;
}