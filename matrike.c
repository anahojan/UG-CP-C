
#include <stdio.h>
int fizpis( int v, int s, int m[v][s]){
     for (int i = 0; i < v ; i++) {
        for (int j = 0; j < s; j++) {
           printf("%i ", m[i][j]);
        }
        printf("\n");
    }
    return 6;
}

int main()
{
    
    int v, s;
    
    printf(" Vnesite št vrstic in stolpcev") ; 
    scanf("%i %i", &v, &s);
    int m [v][s];
    int t [s][v];
    
    for (int i = 0; i < v ; i++) {
        for (int j = 0; j < s; j++) {
            scanf("%i", &m[i][j]);
        }
    }
    int fizpis(int v, int s,int m[v][s]);
    
     for (int i = 0; i < v ; i++) {
        for (int j = 0; j < s; j++) {
           t[j][i]=m[i][j];
        }
     }    
        
     for (int i = 0; i < s; i++) {
         for (int j = 0; j <v; j++) {
             printf("%i ", t[i][j]);
         }
         printf("\n");
     }  
    
    
    return 0;
}
    
//To dela

