#include <cstdio>
#include <cstdlib>
#include "pref.h"
using namespace std;

int pila_vacia(int sne){
  if(sne==100)
  return 1;
  else
  return 0;
}

void push(char q[100],int *k,char num){
  *k=*k-1;
  q[*k]=num;
}

char pop(char c[100],int *kc){
  char j;
  j=c[*kc];
  *kc=*kc+1;
  return j;
}

int prioridad(char op){
  int prio;
  switch (op){
      case '^': case'%':
        prio=3;
      break;
      case '*': case'/':
        prio=2;
      break;
      case '+': case '-':
        prio=1;
      break;
      case '(':
        prio=0;
      break;
  }
  return prio;
}
