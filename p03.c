#include <stdio.h>
#include <ctype.h>

void analiza_linea(char *linea, int *pvocales, int *pconsonantes, int *pdigitos, int *pblancos, int *potros);

main()
{
    char linea[80];
    int vocales = 0; ///contador de vocales
    int consonantes = 0;
    int digitos = 0;
    int blancos = 0; //contador de espacios en blanco y tabulaciones
    int otros = 0; // contador de otro tipo de caracteres

    printf("\nIntroduzca una linea de texto (Enter para terminar): \n");
    scanf(" %[^\n]", linea);

    analiza_linea(linea, &vocales, &consonantes, &digitos, &blancos, &otros);

    printf("\nNumero de vocales ->\t%d", vocales);
    printf("\nNumero de consonantes->\t%d", consonantes);
    printf("\nNumero de digitos ->\t%d", digitos);
    printf("\nNumero de espacios en blanco o tabulaciones ->\t%d", blancos);
    printf("\nNumero de otros caracteres ->\t%d\n", otros);
}

void analiza_linea(char *linea, int *pvocales, int *pconsonantes, int *pdigitos, int *pblancos, int *potros)
{
    char c; //Vamos a pasar todos los caracetres a mayusculas
    int cont = 0; //contador de caracteres.

    while ((c = toupper(linea[cont])) != '\0')
    {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            ++ *pvocales;
        else if (c >= 'A' && c <= 'Z')
            ++ *pconsonantes;
            else if (c >= '0' && c <= '9')
                ++ *pdigitos;
                else if (c = ' ' || c == '\t')
                    ++ *pblancos;
                    else
                        ++ *potros;                        
        ++cont;
    }
}