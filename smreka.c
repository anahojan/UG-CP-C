#include<stdio.h>

int main(){
	int visina;
	printf("Vnesi višino smrečice: ");
	scanf("%i", &visina);
	for (int i = visina; i>=0;i--){
		for(int j= 0; j<visina; j++){
			if (j<i){
				printf(" ");
				  
			}else if (j>=0){
				printf("* ");
	    	}
		}
		printf("\n");
	}
	int counter=0;
    int sirina=1+2*(visina-1);
		int sirinadebla=sirina/3;
	int sirina3=sirina-(sirina/3);
    for (int i = 3; i > 0; i--) {
        for (int j = 1; j < sirinadebla+2; j++) {
            printf(" ");
        }
        
        for (int j = sirinadebla+1; j < sirinadebla+1+(visina/3); j++) { // pri 20 je sirina=39 / 3=13
           printf("+ ");
        }
        printf("\n");
    }

	return 0;
}
