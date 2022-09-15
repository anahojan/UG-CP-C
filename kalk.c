#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]){
    float a, b, c;
    char operator;
        
        a=atoi(argv[1]); /* ničli element je samo ime funkcije*/       		operator=*argv[2];
        b=atoi(argv[3]);
        
        printf("%i\n", argc);
        for (int i = 1; i < argc; i++) {
            printf("%s", argv[i]);
        }
        printf("\n");
        printf("%c\n", operator);
        //printf("%c", &argc[2]);
    
        switch(operator)
        {
            case '+' :
            c=a+b;
            printf("Vsota je: %f", c);
            break;
            
            case '-' :
            c=a-b;
            printf("Razlika je: %f", c);
            break;
            
            case '*' :
            c=a*b;
            printf("Zmnožek je: %f", c);
            break;
            
            case '/' : 
            c=a/b;
            printf("Količnik je: %f", c);
            break;
            
            default : 
            printf("Ne morem sešteti/odšteti");
        }
        return 0;
}
//TO DELA - ko damo v terminal moramo paziti na presledke (2 + 3)
