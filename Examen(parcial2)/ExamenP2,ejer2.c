#include<stdio.h>
#include<string.h>
#define MAX 100
void invertir(char* palabra,int x);

int main()
{
char palabra[MAX];
int x;

printf("Escribe una palabra: ");
scanf("%s",palabra);

x=strlen(palabra);
x=x-1;

invertir(palabra,x);

printf("%s",palabra);

 return 0;
}

void invertir(char* palabra,int x)
//RECURSIVA
{

 if(x<0)
 {
     return;

 }
  else
 {
   int aux = *palabra;
   *palabra = *(palabra + x);
   *(palabra + x)=aux;
   invertir(palabra +1,x-2);

 }




}
