#include <stdio.h>
#include <stdlib.h>

int Izpisovanje(int stolpci, int vrstice, int matrika[][stolpci]){
   
    for(int i = 0; i < stolpci; i++){
        for(int j = 0; j < vrstice; j++){
            printf("%d ", matrika[j][i] );
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int vrstice, stolpci;
    printf("Vnesite stevilo vrstic(V) in stolpcev(S) matrike: ");
    scanf("%d %d", &vrstice, &stolpci);
    if(vrstice > 10 || vrstice < 0 || stolpci > 10 || stolpci < 0){
        printf("Napaka: Podati morate pozitivni stevil vrstic in stolpcev, ");
        printf("ki sta manjsi od 10");
        exit(0);
    }
    int matrika[vrstice][stolpci];
    for(int i = 0; i < vrstice; i++){
        for(int j = 0; j < stolpci; j++){
            printf("Vnesite element e%d%d: ", i + 1, j + 1);
            scanf(" %d", &matrika[i][j]);
        }
    }
    int transponirana[stolpci][vrstice];
    for(int i = 0; i < vrstice; i++){
        for(int j = 0; j < stolpci; j++){
           transponirana[j][i]=matrika[i][j];
        }}
    
    printf("\n");
    printf("originalna matrika: \n");
    Izpisovanje(stolpci, vrstice, matrika);
    printf("transponirana matrika: \n");
    Izpisovanje(vrstice, stolpci, transponirana);
    
  return 0;

}

