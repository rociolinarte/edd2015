#include <stdio.h>
#include "funciones.h"


enum Operaciones{

                 SUMA = 1,
                 RESTA = 2,
                 MULTIPLICACION = 3,
                 DIVISION = 4,
                 SALIR = 5
};

void menu ()
{
              printf("1.- Suma\n");
              printf("2.- Resta\n");
              printf("3.- Multiplicacion\n");
              printf("4.- Division\n");
              printf("5.- Salir\n");
              printf("Elige una opcion: ");
}

void datos (float *num1, float *num2)
{

      float param;
      printf("Ingresa el primer numero: \n");
      scanf("%f", &param);
      *num1= param;
       printf("Ingresa el segundo numero: \n");
       scanf("%f", &param);
      *num2= param;
}

void impr_res (float resultado)
{
                 printf("Resultado %5.2f\n", resultado);
}

int main ()
{
               int opc=0;
               float num1, num2, resultado;

               do{
                       menu();
                       scanf("%d", &opc);
                       switch(opc){

                                     case SUMA:
                                                datos(&num1, &num2);
                                                resultado=suma(num1, num2);
                                                impr_res(resultado);
                                                break;


                                     case RESTA:

                                                datos(&num1, &num2);
                                                resultado=resta(num1, num2);
                                                impr_res(resultado);
                                                break;


                                      case MULTIPLICACION:

                                                         datos(&num1, &num2);
                                                         resultado=multiplicacion(num1, num2);
                                                         impr_res(resultado);
                                                         break;

                                       case DIVISION:

                                                      datos(&num1, &num2);
                                                      resultado=division(num1, num2);
                                                      impr_res(resultado);
                                                      break;

                                        case SALIR:

	                                                printf("BYE\n");
                                                    break;

                                        default:
                                                   printf("TRY AGAIN\n");
                                                   break;
                                   }

                    }while(opc != 5);

                     return 0;
}
