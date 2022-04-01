#include <stdio.h>
#define MAX 3
void capturaArreglo(char arr[MAX]);
void letraObj(char *objetivo);
char mayorObj(char arr[MAX], char objetivo);

int main()
{

   char arr[MAX];
   char objetivo;
   char letra;





    capturaArreglo(arr);

      for (int i = 0; i<MAX; ++i)
    {


            printf("%c ",arr[i]);
            fflush(stdin);

    }
    printf("\n");

    letraObj(&objetivo);
    letra=mayorObj(arr,objetivo);

    printf("salida:%c",letra);




    return 0;
}

void capturaArreglo(char arr[MAX])
{

    for (int i = 0; i<MAX  ; ++i)
    {
        printf("Letra %d:", i+1);
        scanf("%c", &arr[i]);
        fflush(stdin);

        if(arr[i] < 97 || arr[i] > 122)
        {
            printf("ingrese otro valor \n");
            i--;
        }
    }


}
void letraObj(char *objetivo)
{
    printf("Letra objetivo:");
    scanf("%c",&*objetivo);
}
char mayorObj(char arr[MAX], char objetivo)
{
    int mayor;


  for (int i=0; i<MAX ;i++)
  {
     if (objetivo < arr[i]);
     {
        mayor=arr[i];
     }

     if( objetivo>=arr[i])

      {
         mayor=arr[i+1];
      }

     if (objetivo == 122)
     {
         mayor = 97;
     }


    return mayor;

  }
}
