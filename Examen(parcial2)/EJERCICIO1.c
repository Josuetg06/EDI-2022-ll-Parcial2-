#include <stdio.h>
#define MAX 6
void capturaArreglo(int arr[MAX]);
void letraObj(int *objetivo);
int busquedaBin(int arr[MAX], int objetivo,int inicio, int fin);

int main()
{

   int arr[MAX];
   int objetivo;
   int numero;
   int inicio=0;
   int fin=MAX-1;
   int cont=0;


    capturaArreglo(arr);

      for (int i = 0; i<MAX; ++i)
    {


            printf("%d ",arr[i]);
            fflush(stdin);

    }
    printf("\n");

    numObj(&objetivo);
    numero=busquedaBin(arr,objetivo,inicio,fin);

    printf("salida:%d",numero);




    return 0;
}

void capturaArreglo(int arr[MAX])
{

    for (int i = 0; i<MAX  ; ++i)
    {
        printf("Numero %d:", i);
        scanf("%d", &arr[i]);
        fflush(stdin);

          if(arr[i] > 100 || arr[i] <=0)
        {
            printf("ingrese otro valor \n");
            i--;
        }
    }


}
void numObj(char *objetivo)
{
    printf("Numero objetivo:");
    scanf("%d",&*objetivo);
}
int busquedaBin(int arr[MAX], int objetivo,int inicio, int fin)
{

    //RECURSIVA

 int mitad=inicio + (fin-inicio)/2;

   if(fin<inicio)
   {
       for(int i=0;i<MAX;i++)
          if(arr[i]>objetivo){

            return i;
          }
          else if(objetivo>arr[MAX-1]){

            return MAX;
          }

       }
   }


   if (arr[mitad]==objetivo)
   {
       return mitad;
   }




  if(arr[mitad] > objetivo ){

    return busquedaBin(arr, objetivo, inicio, mitad - 1);

}

  else{

    return busquedaBin(arr, objetivo, mitad + 1, fin);

  }



}
