#include <stdio.h>
#define MAX 4
void capturaArreglo(int arr[MAX]);
void respuesta(int arr[MAX],int arrRespuesta[MAX]);

int main(){

int arr[MAX];
int arrRespuesta[MAX];

capturaArreglo( arr);
respuesta(arr,arrRespuesta);

 for(int i=0; i<MAX; i++)
    {
      printf("%d\t",arrRespuesta[i]);

    }


return 0;
}

void capturaArreglo(int arr[MAX])
{
  int num=1;
  for(int i=0; i<MAX && num!=0; i++)
    {
      printf("Num mayor a -30 y menor a 30 %d:", i+1);
      scanf("%d",&arr[i]);
      if(arr[i] <= -30 || arr[i] >= 30 )
        {
          printf("Numero no valido");
          num=0;

        }



    }


}

void respuesta(int arr[MAX],int arrRespuesta[MAX])
{


    for(int i=0; i<MAX; i++)
    {
    int producto=1;

        for (int j=0; j<MAX; j++)
         {
          if(arr[j]!=arr[i])
          {
              producto*=arr[j];
          }
         }
        arrRespuesta[i]=producto;
    }


}
