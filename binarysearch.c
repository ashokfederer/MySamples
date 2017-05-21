#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,limit,term,flag,mid;
	int a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	scanf("%d",&term);
	flag = 1;
	i=0;
	limit = n-1;
	while(flag!=0)
	{
		mid = (limit+i)/2;
		if(term == a[mid])
		{
			flag = 0;
		}
		else if(term > a[mid])
		{
			i = mid+1;
		}
		else
		{
			limit = mid-1;
		}
	}
	printf("Answer : %d\n",mid);
	return 0;
}
