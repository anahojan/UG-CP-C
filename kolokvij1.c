/*Kalkulator in meni(scanf in printf) za seštevanje in odštevanje- Uporabljaj switch in funkcije*/

#include <stdio.h>

int main()
{
        float a, b, c;
        char operator;
        printf("Vnesite operacijo: ");
        scanf("%f %c %f", &a, &operator, &b);
        
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
//TO DELA
