#include <stdio.h>

int main()
{
    int num, c;
    printf("stevilo: ");
    scanf("%i", &num);
    
    for (int i = 1; i <= num; i++) {
        c=i*i*i;
        printf("cube of %i je: %i\n", i, c );
    }
    return 0;
}

//To dela
