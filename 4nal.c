
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a=argc-1;
    int polje[argc-1];
    for (int i = 0; i < argc -1; i++) {
        polje[i]=atoi(argv[i+1]);
    }
    
    //izpis pravilnega vrstnega reda
    for (int i = 0; i < argc-1; i++) {
        printf("%i ", polje[i]);
    }

    printf("\n");
    //izpis obratnega vrstnega reda
    for (int i = argc-2; i >= 0; i--) {
       printf("%i, ", polje[i]);
    }
    
    //Število vnešenih elementov
    printf("\nŠtevilo vnešenih elementov je: %i", argc-1);
    
    //vsota elementov
    int vsota=0;
    for (int i = 0; i < argc-1; i++) {
        vsota=vsota+polje[i];
    }
    printf("\nVsota je: %i", vsota);

    //povprečje vseh Število
    int avr=vsota/a;
    printf("\nPovprecje je: %i\n", avr);
    
    //mediana vseh števil
    int var2=0;
    int var=(argc-1)%2;
    if((argc-1)%2!=0){
        printf("\nMediana je: %i\n", polje[var+1]);
    }else{
        for (int i = 0; i < argc-1; i++) {
            if(i==((int) a%2)){
                for (int j = ((int) a%2); j < i+1; j++) {
                    var2=var2+polje[j];
                }
            
            }else{
                continue;
            }
        }
        float mediana = var2/2;
        printf("Mediana je: %f\n", mediana);
    }
    
    //Število različnih števil
    int enaka=0;
    for (int i = 1; i < argc-1; i++) {
        for (int j = i+1; j < argc-1 ; j++) {
            if(polje[i]==polje[j]){
                enaka++;
            }
        }
    }
    printf("\n %i", enaka);
    int razlicnih=(argc-1)-enaka;
     printf("Različnih števil je: %i\n", razlicnih);
   
   
   
    
 
    return 0;
}
//To dela
