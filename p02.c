#include <stdio.h>

void f1(int x, int y);
void f2(int *, int *);

//Añadimos un comentario para probar GitHub

main()
{
    int u, v;
    u = 1;
    v = 3;

    printf("\nAntes de llamar a f1:\tu = %d\tv = %d", u, v);
    f1(u, v);
    printf("Al salir de f1:\t\tu = %d\tv = %d", u, v);

    printf("\n\nAntes de llamar a f2:\tu = %d\tv = %d\n", u, v);
    f2(&u, &v);
    printf("Al salir de f2:\t\tu = %d\tv = %d", u, v);
}

void f1(int u, int v) //paso de argumentos por parametro
{
    u = 0;
    v = 0;

    printf("\nDentro de f1: \t\tu = %d\tv = %d\n", u, v);
}

void f2(int *pu, int *pv) //paso de argumentos por referencia
{
    *pu = 0;
    *pv = 0;

    printf("Dentro de f2:\t\t*pu = %d\t*pv = %d\n", *pu, *pv);
}

/*
Antes de llamar a f1:   u = 1   v = 3
Dentro de f1:           u = 0   v = 0
Al salir de f1:         u = 1   v = 3

Antes de llamar a f2:   u = 1   v = 3
Dentro de f2:           *pu = 0 *pv = 0
Al salir de f2:         u = 0   v = 0
*/