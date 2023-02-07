#include <stdio.h>
#include <stdlib.h>

ordenar(int n, int *x);

main()
{
    int i, n, *x;

    printf("Cuantos numeros seran introducidos?\n");
    scanf("%d", &n);
    printf("\n");
    
    //Reserva de memoria
    x = (int *) malloc(n * sizeof(int));

    //Leer lista de numeros
    for ( i = 0; i< n; ++i)
    {
        printf("i = %d   x = ", i + 1);
        scanf("%d", x + i);
    }

    //Ordenamos el array
    ordenar(n, x);

    //escribimos la lista ordenada
    printf("\n\nLista ordenada:\n\n");
    for(i=0; i<n;++i)
        printf("i = %d   x = %d\n", i+1, *(x+i));
}

ordenar(int n, int *x)
{
    int cont = 0;
    int aux, i;
    while (cont <= n)
    {
        for(i=0; i<n-1;++i)
        if (*(x + cont) > *(x + (cont + 1)))
        {
            aux = *(x + cont);
            *(x + cont) = *(x + (cont + 1));
            *(x + (cont + 1)) = aux;
        }
    }
}