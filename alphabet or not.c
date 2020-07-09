#include <stdio.h>

int main()
{
    char b = ';';
    int a = (int)b;
    
    if((a>=65 && a<91)||(a>96 && a<121))
    printf("IT is alphabet");
    else
    printf("no");
    

    return 0;
}