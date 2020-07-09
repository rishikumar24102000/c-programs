/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int s(int* a)
{
    int sum=0;
    for(int i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}



int avg(int* a,int length)
{
    int sum = s(a);
    int avg = sum/length;
    return avg;
}


int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};
    
    int a_length = sizeof(a)/sizeof(int);
    int b_length = sizeof(b)/sizeof(int);
    
    int a_avg = avg(a,a_length);
    int b_avg = avg(b,b_length);

    printf("%d\n",a_avg);
    printf("%d\n",b_avg);

    return 0;
}
