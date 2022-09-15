#include <stdio.h>

int main(){
	int tabela[6]={1,2,3,4,5,6};
	int vsota=0;
	int zmnozek = 1;
	int i;
	for (int i = 0; i < 6; i++) {
	   vsota=vsota+tabela[i];
	   zmnozek=zmnozek*tabela[i];
	}
	
	printf("Vsota je: %i\n", vsota);
	printf("Zmnozek je: %i\n", zmnozek);
	
	float povprecje=(float)vsota/5;  //to bo na kolokviju
	printf("Povprecje: %f", povprecje);
	return 0;


}

//to dela
