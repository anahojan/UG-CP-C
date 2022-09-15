#include <stdio.h>

float vsota1();
float fpovprecje();
float gvsota;
int main()
{
    int num;
    printf("Vnesite število elementov, ki jih bo imel array");
    scanf("%i", &num);
    
    float polje[num];
    for (int i = 0; i < num; i++) {
        printf("Vnesite element: ");
        scanf("%f", &polje[i]);
    }
   
    printf("\n Vsa vnesena števila: ");
    for (int i = 0; i < num; i++) {
    printf("%f ,", polje[i]);
    }
    
    //klic 1
    gvsota = vsota1 (num, polje);
    printf("\nVsota je: %f", gvsota);
    
    //klic2
    float povprecje=fpovprecje(num);
    printf("\nPovprečje je: %f", povprecje);
    
   int negativno=0;
    for (int i = 0; i < num; i++) {
        if(polje[i]<0){
            negativno++;
        }
    }
    printf("\n Negativnih števil je: %i", negativno);
   
   int pozitivno=0;
    for (int i = 0; i < num; i++) {
        if(polje[i]>0){
            pozitivno++;
        }
    }
     printf("\n Pozitvnih stevil je: %i", pozitivno);
 
    
    float poljepoz[pozitivno];
    float poljeneg[negativno];
    int dpoz =0;
    int dneg=0;
    for (int i = 0; i < num; i++) {
         if(polje[i]>0){
            poljepoz[dpoz]=polje[i];
            dpoz=dpoz+1;
         }else if(polje[i]<0) {
             poljeneg[dneg]=polje[i];
             dneg=dneg+1;
        }
    }
    
    
    
    printf("\n Negativna števila: \n");
    for (int i = 0; i < negativno; i++) {
       printf("%f, ", poljeneg[i]);
    }
    printf("\nPozitiva števila: \n");
    for (int i = 0; i < pozitivno; i++) {
       printf("%f , ", poljepoz[i]);
    }
    
    return 0;
 }   
////////////////////////vsota funkcija//////////////////////////
float vsota1(int num, float polje[num])  {
float vsota=0;
for (int i = 0; i < num; i++) {
    vsota=vsota+polje[i];
}
return vsota;
}
//////////////////////////////////end vsota///////////////////////

////////////////////////////////// start povprecje///////////////////
float fpovprecje(int num){
    float povprecje=gvsota/num;
    return povprecje;
}
////////////////////////////////////end povprecje//////////////////////
