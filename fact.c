#include <stdio.h>
int main() {
	int i, fact = 1, num;
	printf("please enter a number: ");
	scanf("%d",&num);
	if (num<0)
	{
	printf("\nPlease enter a positive number");
	printf("find facrorial and try again. \n");
	printf("\nfactorial cant be found for negative");
	printf("values. Can be only for positive \n");
	return 1;
	}
	for (i=1;i<=num;i++)
	fact=fact*i;
	printf("\n");
	printf("Entered number is: %d and its factorialo (%d!) is %d\n ",num,num,fact);
	return 0;
}
	
/*to dela*/
