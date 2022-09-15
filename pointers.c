#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b, vsota;
    int *adresaa, *adresab;
    scanf("%i %i", &a, &b);
    adresaa=&a;
    adresab=&b;
    vsota=*adresaa+*adresab;
    printf("%i", vsota);
return 0;
}
