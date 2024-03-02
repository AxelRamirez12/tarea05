#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ()
{
    int op, uno, dos;
do {
    system("clear");
    printf("---Calculadora---\n");
    printf("\n¿Que desea hacer?\n");
    printf("1) Sumar\n");
    printf("2) Restar\n");
    printf("3) Multiplicar\n");
    printf("4) Dividr\n");
    printf("5) Salir\n");
    scanf("%d",&op);
    switch(op){
        case 1:
                printf("tSumar\n");
                printf("Introduzca los numeros a sumar separados por comas\n");
                scanf("%d, %d",&uno,&dos);
                printf("%d + %d =%d\n", uno, dos, (uno + dos));
                sleep(5); //Pausa el programa durante 5 segundos
                break;
        case 2:
                printf("tRestar\n");
                printf("Introduzca los numeros a restar separados por comas\n");
                scanf("%d, %d",&uno,&dos);
                printf("%d - %d =%d\n", uno, dos, (uno - dos));
                sleep(5); //Pausa el programa durante 5 segundos
                break;
        case 3:
                printf("tMultiplicar\n");
                printf("Introduzca los numeros a multiplicar separados por comas\n");
                scanf("%d, %d",&uno,&dos);
                printf("%d * %d =%d\n", uno, dos, (uno * dos));
                sleep(5); //Pausa el programa durante 5 segundos
                break;
        case 4:
                printf("tDividir\n");
                printf("Introduzca los numeros a dividir separados por comas\n");
                scanf("%d, %d",&uno,&dos);
                printf("%d / %d =%.2lf\n", uno, dos, ((double)uno / dos));
                sleep(5); //Pausa el programa durante 5 segundos
                break;
        case 5:
                printf("tSalir\n");
                sleep(5); //Pausa el programa durante 5 segundos
                break;
        default:
                printf("Opcion invalida.\n"); 
                sleep(5); //Pausa el programa durante 5 segundos

        }
} while (op !=5);
        system("clear");
        return 0;
    }