#include <stdio.h>

int devolverCuadrado(int num1);

int main()
{
    int num1, num2;
    int resultado;
    printf("Ingrese dos numeros: \n");
    scanf("%d %d", &num1 , &num2);
    resultado = devolverCuadrado(num1);
    printf("El cuadrado del numero calculado es: %d \n", resultado);
    return 0;
}


int devolverCuadrado(int num1)
{
    int resultado;
    resultado = num1 * num1;
    return resultado;
}