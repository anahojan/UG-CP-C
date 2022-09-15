#include <stdio.h>
#include <stdlib.h>

int sestej(int argc, int stevila[argc-1]){
int c=0;
for(int i;i<argc-1;i++){
 c=c+stevila[i];
}
return c;
}


int main(int argc, char *argv[]){
int stevila[argc-1];
for (int i=0;i<argc-1;i++){
	stevila [i]=atoi(argv[i+1]);
}
for (int i=0;i<argc-1;i++){
	printf("%i, ", stevila[i]);
}
int sestevek=sestej(argc, stevila);
printf("\n%i", &sestevek);
return 0;
}

//ne dela pravilno
