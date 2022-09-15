#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    
    int a,b; char op;
    printf("%i", argc);
    if (argc==1){printf("vnesi kaj je za izračunat sedaj, če nisi že prej");scanf("%i %c %i", &a, &op, &b);}else{
    
    a = atoi(argv[1]);
    b = atoi(argv[3]);
    op= *argv[2];}
    int r;
    switch (op){
        case '+': r=a+b; break;
        case '-': r=a-b; break;
    }
    printf("rezultat je %i", r);
    
}
//string bodo na kolokviju
