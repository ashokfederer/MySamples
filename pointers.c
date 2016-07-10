//Pointers  
#include <stdio.h>

int main(void) {
	// your code goes here
	int a = 10;
	int* ptr = &a;
	int **ptr2 = &ptr;
	printf("%d\n",a);
	printf("%d\n",*ptr);
	printf("%d\n",ptr);
	printf("%d\n",*ptr2);
	printf("%d\n",ptr2);
	printf("%d",**ptr2);
	return 0;
}

Skillrack Programs
//Pangram
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[26],i=0,flag=0,ind=0;
    char str[1000];
    for(i=0;i<26;i++)
    {
    	a[i]=0;
    }
    scanf("%[^\n]s",str);
    for(i=0;str[i]!=0;i++)
    {
    	if(str[i]>='a' && str[i]<='z')
    	{
    		ind = str[i] - 97;
    		a[ind]++;
    	}
    	else if(str[i]>='A' && str[i]<='Z')
    	{
    		ind = str[i] - 65;
    		a[ind]++;
    	}
    }
    for(i=0;i<26;i++)
    {
    	if(a[i]==0)
    	{
    		flag = 1;
    		break;
    	}
    }
    if(flag == 1)
    {
    	printf("no");
    }
    else
    {
    	printf("yes");
    }
    return 0;
}

//Digits divisible
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp=0,count=0,rem=0;
    scanf("%d",&n);
  	temp = n;
   	while(n>0)
   	{
   		rem = n % 10;
   		if(rem!=0)
   		{
   			if(temp%rem == 0)
   			{
   				count++;
   			}
   		}
   		n = n/10;
   	}
    printf("%d",count);
    return 0;
}

//Sum of pairs divisible by a specified number

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,count=0,i=0,j=0,sum = 0;
    scanf("%d%d",&n,&d);
    int* a;
    a = (int*)malloc(4*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum = a[i] + a[j];
            if(sum % d ==0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}

