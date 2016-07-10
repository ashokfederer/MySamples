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
