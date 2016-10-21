// Method 1
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,rem=0,bits=0,i=0,max=0,count=1; 
    int* a;
    scanf("%d",&n);
    bits = log2(n)+1;
    a = (int*)malloc(4*bits);
    while(n>0)
    {
        rem = n%2;
        a[i]=rem;
        i++;
        n = n/2;
    }
    for(i=0;i<bits-1;i++)
    {
        if(a[i]==1 && a[i+1]==1)
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max = count;
            }
            count = 1;
        }
    }
    if(count>max)
    {
        max = count;
    }
    printf("%d",max);
        
    return 0;
}
------------------------------------------
//Method 2
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int max=0,count=0,n; 
    int rem=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%2;
        if(rem==1)
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max = count;
            }
            count=0;
        }
        n=n/2;
    }
    if(count>max)
    {
        max = count;
    }
    printf("%d",max);
    return 0;
}

