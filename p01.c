# include <stdio.h>

main()
{
    int v = 3;
    int *pv;
    pv = &v; //Ahora ya pv = 3

    printf("\npv = %d\t&v = %d\t*pv = %d\tv = %d\n", pv, &v, *pv, v);

    *pv = 0; //Ahora v vale cero, aunque sigue ocupando la misma posicion en la memoria(pv)
    printf("\npv = %d\t&v = %d\t*pv = %d\tv = %d\n", pv, &v, *pv, v);
}

/*
pv = -1415579644        &v = -1415579644        *pv = 3 v = 3

pv = -1415579644        &v = -1415579644        *pv = 0 v = 0
*/