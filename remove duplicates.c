#include <stdio.h>
int pop(int* a,int n,int index)
{
    for(int i = index;i<n;i++)
    {
        a[i]=a[i+1];
    }
    return 0;
}

int main()
{
    int a[] = {1,2,3,3,5}; //1235
    int n = 6;
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;)
        {
            if(a[i]==a[j])
            {
                pop(a,n,i);
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    for(int i =0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}