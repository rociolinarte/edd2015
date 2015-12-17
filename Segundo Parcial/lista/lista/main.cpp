#include <cstdlib>
#include <iostream>
#include "funciones.h"


using namespace std;

int main () {

    lista listado;
    int dato, opc =0, rep=0, busq;
    iniciar(listado);

    while(opc != 4){
          cout<<"Elija una opcion"<<endl;
          cout<<"1)Insertar al final"<<endl;
          cout<<"2)Insertar al principio"<<endl;
          cout<<"3)Busqueda"<<endl;
          cout<<"4)Salir"<<endl;
          cin>>opc;


          switch(opc){
          case 1:
                 dato=0;
                 while(dato != -1){
                      cout<<".-";
                      cin>>dato;
                      if(dato != -1)
                      insertarAlfinal(listado, dato);

               }
               imprimir(listado);
               borrarTodo(listado);
               break;

           case 2:
                  dato=0;
                  while(dato != -1){
                  cout<<".-";
                  cin>>dato;
                  if(dato != -1)
                  insertarAlprincipio(listado, dato);

               }
               imprimir(listado);
               borrarTodo(listado);
               break;

             case 3:

                    dato=0;
                    while(dato != -1){
                    cout<<".-";
                    cin>>dato;
                    if(dato != -1)
                    insertarAlfinal(listado, dato);
              }
              imprimir(listado);
              cout<<endl;

              do{
                   dato=0;
                   cout<<"Inserte el numero que busca"<<endl;
                   cin>>busq;
                   cout<<"Inserte dato "<<endl;
                   cin>>dato;
                   busqueda(listado, busq, dato);
                   imprimir(listado);
                   cout<<" Continuar (ingrese 1 para terminar"<<endl;
                   cin>>rep;

              }while(rep != 1);
              borrarTodo(listado);
              break;

           case 4:
                  cout<<" Good bye"<<endl;
                  break;


           default:
                  cout<<"Try Again "<<endl;
                  break;

            }

     }
}
