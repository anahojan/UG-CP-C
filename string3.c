
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{   
    int size = argc-1;
    float arr[size];
    float arr2[size];
    
    for (int i=0; i<size; i++){
        arr[i]=atoi(argv[i+1]);
        arr2[i]=atoi(argv[i+1]);
    }
    
    int najvecje=arr[0];
    for(int i=0;i<size;i++)
    if (arr2[i]<0){
        arr2[i]=arr2[i]*(-1);
    }
    for (int i=0; i<size; i++){
        
          if (arr2[i]>najvecje){
              najvecje=arr2[i];
          }  
          printf("%i\n", najvecje);
          
          for (int i=0; i<size; i++){
              arr[i]=(float)arr[i]/najvecje;
          }
          for(int i=0; i<size; i++){
              printf("%f ", arr[i]);
          }
        
    }




//normaliziranje števila- v command line vstavljas stevila s presledki

