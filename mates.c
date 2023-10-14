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

void verificacion(){

    printf("Indefinido\n");
}

float division(float a, float b){
    
    float resultado;

    if(b == 0){

        printf("Indefinido\n");
    }else{

        resultado = (a / b);
        return resultado;
    }  
}

int fibonacci(int n){

    int fn;

    if(n == 0 || n == 1){

        fn = n;
    }else{

        fn = fibonacci(n - 1) + fibonacci(n - 2);
    }

    return fn;
}