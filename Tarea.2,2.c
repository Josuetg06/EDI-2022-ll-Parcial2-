#include <stdio.h>
#define MAX 4
 int buscarObjetivo(int arr[MAX],int numObj,int ini,int fin);

int main()
{
    int arr[MAX];
    int numObj;
    int ini=0;
    int fin=MAX-1;
    int pos;



    for(int i=0;i<MAX;i++)
    {
        printf("Numero %d:",i+1);
        scanf("%d",&arr[i]);
    }


    for (int i = 0; i < MAX; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Dame el numero objetivo:");
    scanf("%d",&numObj);

    pos=buscarObjetivo(arr,numObj,ini,fin);

    printf("Se encuentra en la posicion: %d",pos);

       return 0;
}

int buscarObjetivo(int arr[MAX],int numObj,int ini,int fin)
 {
     int mitad;

     mitad= ini + (fin-ini)/2;


     if(ini>fin && numObj>arr[MAX-1])
     {
         return MAX;
     }

     if(arr[mitad]==numObj)
     {
         return mitad;

     }
     if(arr[mitad]>numObj)
     {
         return buscarObjetivo(arr,numObj,ini,mitad-1);
     }
     else if(arr[mitad]<numObj)
     {
         return buscarObjetivo(arr,numObj,mitad+1,fin);
     }
     else
     {
         for (int i=0; i < MAX; i++)
         {
             if(numObj<arr[i])

                return i;
         }
     }

 }

