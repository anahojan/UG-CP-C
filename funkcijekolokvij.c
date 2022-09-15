
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sestej(int size, int array[]){
    int c=0;
    for(int i=0;i<size;i++){
        c=c+array[i];
    }
    return c;

}
int fzmnozek(int size, int array[]){
    int zmnozek=1;
     for(int i=0;i<size;i++){
        zmnozek=zmnozek*array[i];
    }
    return zmnozek;
}



int main(int argc, char *argv[])

{   int size=argc-1;
    int array[size];
for(int i=0;i<size;i++){
    array[i]=atoi(argv[i+1]);
}
for (int i=0; i<size;i++){
    printf("%i",array[i]);
}
int c=sestej(size, array);
printf("\nSestevek vseh elementov v polju je: %i", c);

int zmnozek=fzmnozek(size, array);
printf("\nZmnozek vseh elementov v polju je: %i", zmnozek);
        
}

//to dela
