#include <stdio.h>
#include <math.h>

typedef struct distancia
{
    int x1;
    int y1;
    int x2;
    int y2;
    float dis;
}tipoPunto;

void capturarPuntos(tipoPunto *distancia);
void imprimirPuntos(tipoPunto distancia);
void calcularDis(tipoPunto *distancia);


int main()
{

   tipoPunto distancia;
   capturarPuntos(&distancia);
   imprimirPuntos(distancia);
   calcularDis(&distancia);

   printf("La distancia entre los dos puntos es de: %f",distancia.dis);


    return 0;

}

void capturarPuntos(tipoPunto *distancia){

  printf("x1:");
  scanf("%d",&(*distancia).x1);
  printf("y1:");
  scanf("%d",&(*distancia).y1);
  printf("x2:");
  scanf("%d",&(*distancia).x2);
  printf("y2:");
  scanf("%d",&(*distancia).y2);


}
void imprimirPuntos(tipoPunto distancia)
{

    printf("punto 1:(%d ,%d)\n",distancia.x1,distancia.y1);
    printf("punto 2:(%d ,%d)\n",distancia.x2,distancia.y2);

}
void calcularDis(tipoPunto *distancia)
{

    (*distancia).dis = sqrt(pow(distancia->x2 - distancia->x1,2) + pow(distancia->y2 - distancia->y1,2));

}
