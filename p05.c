#include<stdio.h>

char *x = "Esta cadena se declara externamente\n\n";

main()
{
    char *y = "Esta cadena se declara dentro de main";
    printf("%s", x);
    printf("%s", y);
}