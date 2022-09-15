#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	printf("Vnesite dve stevila");
	scanf("%i %i\n", &a, &b);
	switch(a > b){
		case "true": 
		printf("a je večji");
		break;
		case "false": 
		printf("b je večji");
		break;
	}
return 0;
}


//to ne dela	
		
