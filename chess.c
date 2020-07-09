#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {

    int n,size;
    scanf("%d",&n);
    
    for(int k=0;k<n;k++){
        scanf("%d",&size);

        for(int i=0;i<size;i++)
        {
            for (int j=0;j<size;j++)
            {
                if(i%2==0){
                    if(j%2==0){
                        printf("W");
                    }
                    else{
                        printf("B");
                    }
                } 
                else{
                    if(j%2==0){
                        printf("B");
                    }
                    else{
                        printf("W");
                    }
                }
                
            }
            printf("\n"); 
            
        }
    }

    return 0;
}