

#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]) {
    int a=argc-1;
    int polje[a];
    for(int i=0; i<a; i++){
        polje[i]=atoi (argv[i+1]);
    }
    
    
    
     printf("Polje je: \n");
    for(int i=0; i < a; i++){
        printf("%i\n", polje[i]);
    }
    int counter= 0;
    for(int i=0; i < a; i++){
        if(polje[i] % 2 == 0){
            counter++;
            
        }
    } 
    int soda=0;

    int novopolje[counter];
    for(int i=0; i < a; i++){
        if(polje[i] % 2 == 0){
            novopolje[soda] = polje[i];
            soda++;
        }
    } 
      
    printf("Soda števila so: \n");
    for(int i=0; i < counter; i++){
        printf("%i\n", novopolje[i]);
    }
    
    return 0; 
}
