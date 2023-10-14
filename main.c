#include<stdio.h>
#include<stdlib.h>
#include "mates.h"

int main(void){

    int resultado, x, y, selector, numElementos;
    float rDivision, dividendo, divisor;

    do{
      
        printf("---Calculadora---\n");
        printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Fibonacci\n6. Salir\n");
        scanf("%d", &selector);
        system("cls");

        switch(selector){

        case 1:
            printf("Ingrese un numero: ");
            scanf("%d", &x);
            printf("Ingrese un numero: ");
            scanf("%d", &y);
            resultado = suma(x, y);
            printf("%d + %d = %d\n", x, y, resultado);
            break;
        
        case 2:
            printf("Ingrese un numero: ");
            scanf("%d", &x);
            printf("Ingrese un numero: ");
            scanf("%d", &y);
            resultado = resta(x, y);
            printf("%d - %d = %d\n", x, y, resultado);
            break;

        case 3:
            printf("Ingrese un numero: ");
            scanf("%d", &x);
            printf("Ingrese un numero: ");
            scanf("%d", &y);
            resultado = multiplicacion(x, y);
            printf("%d * %d = %d\n", x, y, resultado);
            break;
            
        case 4:
            printf("Ingrese un numero: ");
            scanf("%f", &dividendo);
            printf("Ingrese un numero: ");
            scanf("%f", &divisor);
            rDivision = division(dividendo, divisor);
            if(y != 0)
                printf("%.0f / %.0f = %.2f\n", dividendo, divisor, rDivision);
            break;

        case 5:
            printf("Secesion de fibonacci\n");
            printf("Cuantos elementos de la sucesion desea: ");
            scanf("%d", &numElementos);
            for(size_t i = 1; i <= numElementos; i++){
                printf("%d ", fibonacci(i));
            }
            puts(" ");
            break;
        case 6:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion no disponible.\n");
            break;
            
        }
        system("pause");
        system("cls");
    }while(selector != 6);
    

    return 0;
}