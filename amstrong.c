/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
    int a,mod,power,length=0;
    
    int amstrong=0;
    scanf("%d",&a);
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
    printf("%d\n",amstrong);
        
        
        
   if(b==amstrong)
   {
     printf("yes");  
   }
    

   else
    
    printf("no");
    
    
    

    return 0;
}
