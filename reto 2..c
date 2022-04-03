#include <stdio.h>

void conversionHex( dec);

int main()
{
  int dec;
  printf("Ingresa el numero decimal que se desea convertir:");
  scanf("%d",&dec);

  conversionHex(dec);



    return 0;
}
void conversionHex( dec)
{
  int res;
  res=dec%16;
  dec=dec/16;

  if (dec>0){

    conversionHex(dec/16);

  }


            if(res==0)
            {
                printf("0");
            }

            if(res==1)
            {
                printf("1");
            }
            if(res==2)
            {
                printf("2");
            }
            if(res==3)
            {
                printf("3");
            }
            if(res==4)
            {
                printf("4");
            }
            if(res==5)
            {
                printf("5");
            }
            if(res==6)
            {
                printf("6");
            }
            if(res==7)
            {
                printf("7");
            }
            if(res==8)
            {
                printf("8");
            }
            if(res==9)
            {
                printf("9");
            }
            if(res==10)
            {
                printf("A");
            }
            if(res==11)
            {
                printf("B");
            }
            if(res==12)
            {
                printf("c");
            }
             if(res==13)
            {
                printf("D");
            }
            if(res==14)
            {
                printf("E");
            }
            if(res==15)
            {
                printf("F");
            }


}



