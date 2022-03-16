#include<stdio.h>
#include<string.h>
#define MAX 100

int palindromaRecursiva(char palabra[MAX],int x,int y);
int palindromaCiclos(char palabra[MAX],int x);
int main()
{
 char palabra[MAX];
 int x,y=0,a=0,esPal,esPalindroma;
   printf("\n\nEscribe una palabra: ");
   gets(palabra);

   x=strlen(palabra);
   x=x;

 while (palabra[a]!='\0')
 {
     if(palabra[a]== ' ')
     {
         for(int i=a;i<x;i++)

         {
             palabra[i]=palabra[i+1];
         }
        x--;
     }
     a++;
 }
 x=x-1;

 esPal=palindromaRecursiva( palabra, x,y);
 esPalindroma=palindromaCiclos(palabra, x);

 printf("Con Recursividad:\n");
 if(esPal==1)
 {
     printf("la palabra es palindroma");
 }
else if (esPal==0){

    printf("la palabra no es palindroma");

 }
 printf("\n");

 printf("Con Ciclo:\n");

 if(esPalindroma==1)
 {
     printf("la palabra es palindroma");
 }
 else if(esPalindroma==0)

    printf("la palabra no es palindroma");

 }

 int palindromaRecursiva(char palabra[MAX],int x,int y)

 {
     if(y>=x/2)
     {

     return 1;
     }


     else if (palabra[y]==palabra[x]){

     palindromaRecursiva(palabra,y+1,x-1);
     }

     else
        {

        return 0;

        }



 }

 int palindromaCiclos(char palabra[MAX],int x)
 {

      for(int i=0;i<=x/2;i++)
    {

     if(palabra[i]!=palabra[x-i])

         return 0;


   }

   return 1;



 }


