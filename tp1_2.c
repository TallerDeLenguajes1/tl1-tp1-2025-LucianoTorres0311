#include <stdio.h>

int devolverCuadrado(int num1);
void escribirCuadrado(int num2);
void mostrarDireccion(int *punt);

int main()
{
    int num1, num2;
    int result;
    int *punt = &num1;
    printf("Ingrese dos numeros: \n");
    scanf("%d %d", &num1 , &num2);
    result = devolverCuadrado(num1);
    printf("El cuadrado del numero calculado es: %d \n", result);
    escribirCuadrado(num2);
    mostrarDireccion(punt);
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