#include <stdio.h>

int main(){

	float sum, prvaocena, drugaocena, tretjaocena; 
	printf("vnesite oceno od ena do deset: ");
	scanf("%f",&prvaocena);
	printf("vnesite oceno od ena do deset: ");
	scanf("%f",&drugaocena);
	printf("vnesite oceno od ena do deset: ");
	scanf("%f",&tretjaocena);
	float average = ( prvaocena + drugaocena + tretjaocena )/ 3;
	printf("average je %f\n", average);
	return 0;
}

/*TO DELA*/
