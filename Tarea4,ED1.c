#include <stdio.h>
typedef struct fecha
{
    int dia;
    char mes[30];
    int year;
}tipoFecha;

void capturaFecha(tipoFecha *fecha);
void imprime(tipoFecha fecha);

int main()
{

    tipoFecha fecha;

    capturaFecha(&fecha);
    imprime(fecha);

    return 0;

}
void capturaFecha(tipoFecha *fecha)
{
    printf("Escribe el Dia:");
    scanf("%d", &(*fecha).dia);

    printf("Escribe el Mes:");
    scanf("%s", &(*fecha).mes);

    printf("Escribe el Anio:");
    scanf("%d", &(*fecha).year);



    fecha->mes[0] = toupper(fecha->mes[0]);




}
void imprime(tipoFecha fecha)
{
 printf("%02d/", fecha.dia);
 printf("%s/", fecha.mes);
 printf("%d", fecha.year);
}
