#include<stdio.h>

int suma(int a, int b){

    return (a + b);
}

int resta(int a, int b){

    return (a - b);
}

int multiplicacion(int a, int b){

    return (a * b);
}

void verificacion(int b){

   if(b == 0){

    printf("Division indefinida");
   }

}

float division(int a, int b){
    
    float resultado;

    while(b == 0){
        
        verificacion(b);
    }
    
    resultado = a / b;
    
    return (a / b);
}