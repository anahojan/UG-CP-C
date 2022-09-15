#include <stdio.h>

int main(){
	int i;
	float summat, sumprog;
	float grades [4][1];
	grades[0][0] = 87;
	grades[1][0] = 54;
	grades[2][0] = 87;
	grades[3][0] = 80;
	grades[4][0] = 27;
	
	grades[0][1] = 90;
	grades[1][1] = 87;
	grades[2][1] = 80;
	grades[3][1] = 17;
	grades[4][1] = 100;

	for(i=0;i<5;i++){
	float summat = summat + grades[i][0];
	}

	float averagemat = summat/5;
	printf("povprečje pti matematiki je: %f\n", averagemat);

	for(i=0;i<5;i++){
	float sumprog = sumprog + grades[i][0];
	}
	float averageprog = sumprog/5;
	printf("povprečje pti programiranju je: %f\n", averageprog);
	return 0;
}
//izračun ni pravilen
