#ifndef _lista
#define _lista

typedef struct snodo{
      int dato;
      snodo * next;
}nodo;


typedef struct{
    nodo * inicio;
    int capacidad;
}lista;

void iniciar (lista &);
nodo *nodonuevo(int );
bool vacia (lista &);
void imprimir(lista &);
bool insertarAlfinal(lista &, int );
bool insertarAlprincipio(lista &, int );
int busqueda (lista &, int , int );
void borrarTodo (lista &);

#endif // _lista
