#include <stdio.h>

main()
{
    static int x[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
    int i;
    for(i=0; i<=9;++i)
    {
        printf("\ni = %d  x[%d] = %d  *(x+%d) = %d  &x[%d] = %x  x+%d = %x", i, i, x[i], i, *(x+i), i,  &x[i], i,  (x+i));
    }
    
}