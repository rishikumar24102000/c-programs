#include <stdio.h>
#include <math.h>
int main()
{
    int a[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int b[2][3]={
        {7,8,9},
        {10,11,12}
        
    };

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    
    
    
    

    return 0;
}
