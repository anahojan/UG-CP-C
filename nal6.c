//velikost vektorjev

#include <stdio.h>

int main(){
    char niz[]="famnit"; //pri int stevilih izpiše število bitov
    int length=sizeof(niz);
        printf("%i", length);
        
int len =strlen(niz);
    printf("%i", len);
    return 0;
    
}
//na kolokviju-sizeof dela narobe pri številkah-zasede bite-delis z sizeof enega elementa
