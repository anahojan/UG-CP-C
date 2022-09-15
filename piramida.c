#include <stdio.h>

int main()
{
    int vr, k=0;
    printf("Vrste: ");
    scanf("%d", &vr);
   for (int i=1; i<=vr; ++i) {
        for (int j=1; j<=i; ++j){
            printf("* "); 
        }
        printf("\n");
    }
    printf("===========================================\n");
    
    for (int i = 1; i <= vr; i++,k=0) {
        for (int j = 1; j <= vr-i; j++) {
            printf("  ");
        }
        while(k!=2*i-1){
            printf("* ");
            ++k;
        }
         printf("\n");
    }
    return 0;
}
// To dela
