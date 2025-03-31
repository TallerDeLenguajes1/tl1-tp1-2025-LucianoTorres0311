#include <stdio.h>

int main()
{
    int x = 6;
    int *p = &x;
    printf("Hola mundo \n");
    printf("el contenido del puntero es: %d \n",*p);
    printf("La direccion de memoria guardada por el puntero es: %p \n",p);
    printf("La direccion de memoria de la variable es: %p \n", &x);
    printf("La direccion de memoria del puntero es: %p \n",&p);
    printf("tamaño de memoria ocupado por la variable: %d \n",   sizeof(x));
    return 0;
}
