#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	printf("Vnesite tri stevila");
	scanf("%i %i %i\n", &a, &b, &c);
	if(a>b && a>c){
	printf("Največje števiolo je %i\n", a);
	}else if(a<b && b>c){
	printf("Največje števiolo je %i\n", b);
	}else{
	printf("Največje števiolo je %i\n", c);
	}
return 0;
}

	
		
