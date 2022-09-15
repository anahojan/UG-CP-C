#include <stdio.h>

int main()
{
    int v;
    printf("Vnesi velikost piramide: \n");
    scanf("%i",&v);
    for (int i = 1; i <= v; i++) {
        for (int j = v; j > i; j--) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    
    
    int d=v-2;
    for (int j = d; j > 0; j--) {
        printf(" ");
    }
    printf("I I\n");
    
    return 0;
}
