#include <stdio.h>
#include <iostream>
#include "pref.h"
using namespace std;
int main()
{
  char infija[100],posfija[100],pila[100],operador,s;
  int ne=100,i=0,p,pr2,x,j=0,band=0,band2=0;

printf("Introduce la exprecion infija\t");
scanf("%s",infija);
// printf("1");

while(infija[i]!= '\0' && band==0)
{
// printf("%c",infija[i]);
// printf("2");
if(infija[i]=='(')
{//****1
operador=infija[i];
push(pila,&ne,operador);
}//****1
if (infija[i]=='1'||infija[i]=='2'||infija[i]=='3'||infija[i]=='4'||infija[i]=='5'||infija[i]=='6'||infija[i]=='7'||infija[i]=='8'||infija[i]=='9'||infija[i]=='0')
{//****2
posfija[j]=infija[i];
j++;
//printf("\nentro porque es %c",infija[i]);
//printf("3");
}//****2

else{//****3
if (infija[i]=='('){//****4
operador=infija[i];
push(pila,&ne,operador);
}//****4

else{//****5
if (infija[i]=='+'||infija[i]=='-'||infija[i]=='*'||infija[i]=='/'||infija[i]=='%'||infija[i]=='^'){//****6

x=pila_vacia(ne);
if(x==1)
{//****7
operador=infija[i];
//printf("\n%c",operador);
push(pila,&ne,operador);
}//****8

else
{
operador=infija[i];
p=prioridad(operador);
//printf("\nprioridad 1 %d",p);
s=pop(pila,&ne);
pr2=prioridad(s);
//printf("\nprioridad 2 %d",pr2);
if(p>pr2)
{
push(pila,&ne,s);
push(pila,&ne,operador);
}
else
{
if (pr2!=0)
{
posfija[j]=s;
j++;
while(pila_vacia(ne)==0)
{

s=pop(pila,&ne);//hago pop del operador que esta en la pila
pr2=prioridad(s);//saco su prioridad
if(p<=pr2)//si la prioridad de mi operador tenia afuera es mayor o = al del q saq
{
posfija[j]=s;//mando a posfija el operador que saque
j++;
}
}
}

push(pila,&ne,operador);// mando al q tenia afuera a la pila
}//else
}
}
}
}
if (infija[i]==')')
{
if (pila_vacia(ne)==1)
{
printf("La exprecion esta mal");
}
while(infija[i]!='(' && pila_vacia(ne)==0)
{
s=pop(pila,&ne);
posfija[j]=s;
j++;

}
if (infija[i]=='(')
{
s=pop(pila,&ne);
}
else
{
printf("Es incorrecta, falta ( ");
band=0;
}
}
i++;
}
while(pila_vacia(ne)==0 && band2==0)
{
s=pop(pila,&ne);
if (s!='(')
{
posfija[j]=s;
j++;
}
else
{
printf("La exprecion esta mal");
band2=1;
}
}
if(pila_vacia(ne)==1 && band==0 && band2==0)
printf("\nPrefijo= %s",posfija);
//system("PAUSE");
return 0;
}
