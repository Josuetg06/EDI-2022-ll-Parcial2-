#include <stdio.h>
int fibonacci(int num);

int main()
{
    int num;
    int resultado;

    printf("Dame un numero");
    scanf("%d",&num);

    resultado=fibonacci(num);

    printf("Es igual a: %d",resultado);

   return 0;
}

int fibonacci(int num)
{
    if(num==0)
    {
        return 0;
    }

    else if(num==1)
    {
        return 1;

    }

    else if(num>=2)
    {
        return (fibonacci(num-1) + fibonacci(num-2));
    }

}
