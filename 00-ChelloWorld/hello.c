#include <stdio.h>
#include <conio.h>

int main()
{
    char nom_ape[15];
    printf("Escriba su nombre ");
    gets (nom_ape);
    printf("\n Hola %s",nom_ape);
    getch();
    return (0);
}
