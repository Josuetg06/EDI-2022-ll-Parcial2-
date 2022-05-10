#include <stdio.h>
#define MAX 7

typedef struct colas
{
    int datos[MAX + 1];
    int inicio;
    int fin;
}cola;

void inicializaCola(cola *c);
int estaVacia(cola cola);
int estaLlena(cola cola);
int insertar(cola *c, int valor);
int eliminar(cola *c, int *v);
void algoritmo_examen(cola *c1, cola *c2);
void imprime(cola c);

int main()
{
    cola cola2;
    cola cola;


    inicializaCola(&cola);

    insertar(&cola, 2);
    insertar(&cola, 3);
    insertar(&cola, 9);

    inicializaCola(&cola2);

    insertar(&cola2, 1);
    insertar(&cola2, 4);
    insertar(&cola2, 8);
    insertar(&cola2, 9);

    algoritmo_examen(&cola, &cola2);

    return 0;
}

void imprime(cola c)
{
   {
    for (int i = c.inicio; i % (MAX + 1) != c.fin; i++)
        printf("%d ", c.datos[i % (MAX + 1)]);
   }

}
void algoritmo_examen(cola *c1, cola *c2)
{
    int valor1, valor2;
    int contador = 0;

    while (contador < 3)
    {
        if (eliminar(c1, &valor1) == 1)
        {
            if (valor1 % 2 == 0)
                insertar(c2, valor1);
            else
                insertar(c1, valor1);
        }

        if (eliminar(c2, &valor2) == 1)
        {
            if (valor2 % 2 != 0)
                insertar(c1, valor2);
            else
                insertar(c2, valor2);
        }
        contador++;

        printf("\n");
        imprime(*c1);
        printf("\n");
        imprime(*c2);
    }

}
void inicializaCola(cola *c)
{
    c->inicio = 0;
    c->fin = 0;
}

int insertar(cola *c, int valor)
{
    int r = 0;

    if (estaLlena(*c) == 0)
    {
        c->datos[c->fin] = valor;
        c->fin = (c->fin + 1) % (MAX+1);
        r = 1;
    }

    return r;
}
int eliminar(cola *c, int *v)
{
    int r = 0;
    if (!estaVacia(*c))
    {
        *v = c->datos[c->inicio];

        c->inicio = (c->inicio + 1) % (MAX+1);
        r = 1;
    }
    return r;
}
int estaVacia(cola cola)
{
    if(cola.inicio == cola.fin)
    {
        return 1;
    }
    return 0;
}


int estaLlena(cola cola)
{
    if (cola.inicio == cola.fin + 1 || (cola.inicio == 0 && cola.fin == MAX))
    {
        return 1;
    }
    return 0;
}


