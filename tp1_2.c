#include <stdio.h>

int devolverCuadrado(int num1);
void escribirCuadrado(int num2);
void mostrarDireccion(int *punt);
void invertir(int *punt, int *punt2);
void orden(int *punt, int *punt2);

int main()
{
    int num1, num2;
    int result;
    int *punt = &num1;
    int *punt2 = &num2;
    printf("Ingrese dos numeros: \n");
    scanf("%d %d", &num1 , &num2);
    printf("El valor antes de invertir de num1 es: %d \n",num1);
    printf("El valor antes de invertir de num2 es: %d \n",num2);
    printf("\n");
    result = devolverCuadrado(num1);
    printf("El cuadrado del numero calculado es: %d \n", result);
    printf("\n");
    escribirCuadrado(num2);
    printf("\n");
    mostrarDireccion(punt);
    printf("\n");
    invertir(punt,punt2);
    printf("El valor despues de invertir de num1 es: %d \n",num1);
    printf("El valor despues de invertir de num2 es: %d \n",num2);
    printf("\n");
    orden(punt,punt2);
    return 0;
}


int devolverCuadrado(int num1)
{
    
    return num1 * num1;
     
}

void escribirCuadrado(int num2)
{
    int resultado;
    resultado = num2 * num2;
    printf("El cuadrado calculado es igual a: %d\n", resultado);
}

void mostrarDireccion(int *punt)
{
    printf("Direccion de memoria de la variable num1: %p \n", punt);
    printf("Contenido de la variable num1: %d \n", *punt);

}

void invertir(int *punt, int *punt2)
{
    int aux;
    aux = *punt;
    *punt = *punt2;
    *punt2 = aux;
}

void orden (int *punt, int *punt2)
{
    int aux;
    if (*punt > *punt2){
        
        aux = *punt;
        *punt = *punt2;
        *punt2 = aux;
    } 
    printf("El valor mas chico es: %d y el valor mas grande es: %d\n", *punt, *punt2);
}