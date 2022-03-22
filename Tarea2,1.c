#include <stdio.h>
#define MAX 4
void capturaNombres(char nombres[MAX]);
int buscaNombre(char nombres[MAX]);



int main()
{
    char nombres[MAX];
    char nombreABuscar;
    int posicion;

    capturaNombres(nombres);
    posicion=buscaNombre(nombres);

    printf("la posicion donde se encuentra es %d:",posicion);



       return 0;
}

void capturaNombres(char nombres[MAX])
   {
   for(int i=0;i<MAX;i++)
      {
       printf("Dame el nombre %d:",i+1);
       scanf("%[^\n]", &nombres[i]);
       fflush(stdin);
      }

   }
int buscaNombre(char nombres[MAX])
{
    char nombreABuscar;
    printf("Dame el nombre a buscar ");
    scanf("%s",&nombreABuscar);

    int pos=-1;

    for(int i=0; i<MAX; i++)
    {
      if(nombres[i]==nombreABuscar)
       {
         pos=i;
       }



    }
     return pos;


}
