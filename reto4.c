#include <stdio.h>
#define MAX 3
#define TAM 3
void capturaArreglos(int arr1[MAX],int arr2[TAM]);
void capturarArr3(int arr1[MAX],int arr2[TAM], int arr3[MAX+TAM]);
void arregloFinal(int arr3[MAX+TAM]);

int main()
{
    int arr1[MAX];
    int arr2[TAM];
    int arr3[MAX+TAM];

    capturaArreglos(arr1,arr2);
    capturarArr3(arr1,arr2,arr3);
    arregloFinal(arr3);

    return 0;
}

void capturaArreglos(int arr1[MAX],int arr2[TAM])
{
     for (int i = 0; i < MAX; i++) {
        printf("Valor [%d] \n", i+1);
        scanf("%d", &arr1[i]);
     }

    printf("El primer arreglo capturado  es:  ");
    printf("[ ");

    for(int i = 0; i < MAX; i++){
        printf("%d ", arr1[i]);
    }

    printf("]");

    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("Valor [%d]\n", i+1);
        scanf("%d", &arr2[i]);
     }

    printf("El segundo arreglo capturado  es:  ");
    printf("[ ");

    for(int i = 0; i < TAM;i++){
        printf("%d ", arr2[i]);
    }

    printf("]");


}
void capturarArr3(int arr1[MAX],int arr2[TAM], int arr3[MAX+TAM])
{
    for(int i=0;i<TAM;i++){
        arr3[i]=arr1[i];

    }

    for(int i=TAM;i<MAX+TAM;i++){
        arr3[i]=arr2[i-TAM];


    }
    printf("\n");
    printf("El tercer arreglo combinado es:  ");
    printf("[ ");

    for(int i = 0; i <MAX+TAM;i++){
        printf("%d ", arr3[i]);
    }

    printf("]");

}
void arregloFinal(int arr3[MAX+TAM])
{//ORDENAR EL ARREGLO FINAL USANDO BubbleSort

  int aux;
  int valido = 1;
  int actual;

  for(int i = 0; i < MAX+TAM && valido == 1; i++){
    valido= 0;
    for(actual = 0; actual < MAX+TAM - i - 1; actual++){
      if(arr3[actual] >= arr3[actual + 1]){
        aux = arr3[actual];
        arr3[actual] = arr3[actual + 1];
        arr3[actual + 1] = aux;

        valido = 1;
      }
    }


  }
    printf("\n");
    printf("El ARREGLO FINAL es:  ");
    printf("[ ");

    for(int i = 0; i <MAX+TAM;i++){
        printf("%d ", arr3[i]);
    }

    printf("]");



}
