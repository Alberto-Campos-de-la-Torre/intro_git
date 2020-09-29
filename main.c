#include <stdio.h>

int main(){
    char nombre[100];
    unsigned int edad;

   // printf("Hola Mundo!\n");
    printf("Escribe tu nombre\n");
    fgets(nombre,sizeof(nombre),stdin);
    printf("Hola %s",nombre);
    printf("Edad:\n");
    scanf("%u",&edad);
    printf("Vas a cumplir=%i\n",edad+1);
    return 0;
}

 