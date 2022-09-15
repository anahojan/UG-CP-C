#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
int leta;
printf ("koliko let imas %s\n", argv[1]);
scanf("%i", &leta);
printf("cestitke za %i let %s", leta, argv[1]);
int len=strlen(argv[1]);
printf("tvoje ime ima %i znakov, %s", len, argv[1]);
    return 0;
}
