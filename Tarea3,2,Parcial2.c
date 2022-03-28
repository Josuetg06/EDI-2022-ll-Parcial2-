#include <stdio.h>
#define TAM 7
void capturaArreglo(int arr[TAM]);
void ordenarBubbleSort(int arr[TAM]);
int masRepetido(int arr[TAM]);
void imprimeArreglo(int arr[TAM]);

int main()
{
    int arr[TAM];
    int rep;

    capturaArreglo(arr);
    ordenarBubbleSort(arr);
    rep=masRepetido(arr);
    imprimeArreglo(arr);

    printf("\n");

     printf("%d",rep);

    return 0;
}

void capturaArreglo(int arr[TAM])
{
  for(int i=0; i<TAM; i++)
    {
      printf("Num %d:", i+1);
      scanf("%d",&arr[i]);

    }

}

void  ordenarBubbleSort(int arr[TAM])
{
  int aux;
  int intercambio = 1;
  int actual;

  for(int i = 0; i < TAM && intercambio == 1; i++){
    intercambio = 0;
    for(actual = 0; actual < TAM - i - 1; actual++){
      if(arr[actual] > arr[actual + 1]){
        aux = arr[actual];
        arr[actual] = arr[actual + 1];
        arr[actual + 1] = aux;

        intercambio = 1;
      }
    }
    imprimeArreglo(arr);
  }


}

int masRepetido(int arr[TAM])
{
int num;
int acum=0;
 for(int i=0; i<TAM; i++ )
 {

     for(int j=TAM-1; j>0; j--)
     {

         if(arr[i]==arr[j])
         {
             acum++;
         }
         return arr[j];
     }




 }


}
void imprimeArreglo(int arr[TAM])
{
  printf("\n[");
  for(int i = 0; i < TAM; i++){
    printf(" %d ", arr[i]);
  }
  printf("]");
}
