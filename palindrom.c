#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int number, t, rev=0, rmrd;
	printf("Please check a number is a palindrome");
	scanf("%d", &number);
	
	t = number;
	while (number >0){
		rmrd = number%10;
		rev= rev*10 +rmrd;
		number =number/10;
	}
	printf("Reversed: %d\n", rev);
	
	if(t==rev){
	printf("Number %d is a palindrome\n", t);
	}else{
	printf("Number %d is not a palindrome\n", t);
	}
return 0;
}
