#include<stdio.h>
#include<stdlib.h>
#include "mates.h"

int main(void){

    int resultado, x, y, selector;
    float rDivision;

    do{
      
        switch(selector){

        case 1:
            printf("Ingrese un numero: ");
            scanf("%d", &x);
            printf("Ingrese un numero: ");
            scanf("%d", &y);
            resultado = suma(x, y);
            printf("%d + %d = %d", x, y, resultado);
            break;
        
        case 2:
            printf("Ingrese un numero: ");
            scanf("%d", &x);
            printf("Ingrese un numero: ");
            scanf("%d", &y);
            resultado = resta(x, y);
            printf("%d - %d = %d", x, y, resultado);
            break;

        case 3:
            printf("Ingrese un numero: ");
            scanf("%d", &x);
            printf("Ingrese un numero: ");
            scanf("%d", &y);
            resultado = multiplicacion(x, y);
            printf("%d * %d = %d", x, y, resultado);
            break;
            
        case 4:
            printf("Ingrese un numero: ");
            scanf("%d", &x);
            printf("Ingrese un numero: ");
            scanf("%d", &y);
            resultado = division(x, y);
            printf("%d / %d = %0.2f", x, y, resultado);
            break;

        default:
            printf("Opcion no disponible.\n");
            break;
            
        }
    }while(selector != 5);
    

    return 0;
}