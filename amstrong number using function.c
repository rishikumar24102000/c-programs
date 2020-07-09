/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int checkamstrong(int a)
{
    int amstrong=0,length=0,mod;
    
    int b=a,c=a;
    for(int i=0;c>0;i++)
    {
        length++;
        c=c/10;
    }
    for(int i=0;a>0;i++)
    {
        mod=a%10;
        amstrong=amstrong+(pow(mod,length));
        a=a/10;
    }  
   if(b==amstrong)
     return 1;
   else
    return 0;

}


int main()
{
    int a;
    scanf("%d",&a);
    checkamstrong(a)?printf("yes"):printf("No");
    return 0;
}
    
    
    
    
    