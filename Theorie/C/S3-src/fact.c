/**************************************
 * fact.c
 * 
 * Programme de calcul de factorielle
 *
 **************************************/

#include <stdio.h>
#include <stdlib.h>
///BBB
// retourne i*j
int times(int i, int j) {
  int m;
  m=i*j;
  printf("\t[times(%d,%d)] : return(%d)\n",i,j,m);
  return m;
}
// calcul r�cursif de factorielle
// n>0
int fact(int n) {
  printf("[fact(%d)]: Valeur de n:%d, adresse: %p\n",n,n,&n);
  int f;
  if(n==1) {
    printf("[fact(%d)]: return(1)\n",n);
    return(n);
  }
  printf("[fact(%d)]: appel � fact(%d)\n",n,n-1);
  f=fact(n-1);
  printf("[fact(%d)]: calcul de times(%d,%d)\n",n,n,f);
  f=times(n,f);
  printf("[fact(%d)]: return(%d)\n",n,f);
  return(f);
}

void compute() {
  int nombre=3;
  int f;
  printf("La fonction fact est � l'adresse : %p\n",fact);
  printf("La fonction times est � l'adresse : %p\n",times);
  printf("La variable nombre vaut %d et est � l'adresse %p\n",nombre,&nombre); 
  f=fact(nombre);
  printf("La factorielle de %d vaut %d\n",nombre,f);
}
///AAA


#define MSG_LEN 80
char msg[MSG_LEN];
float matrix1[4];
float matrix3[2]={1.3,2.4};
struct fraction {
  float den;
  float num;
} fract;
const int nombre=7;

int max(int i, int j) {
  if(i>j)
    return(i);
  else
    return(j);
}

int main(int argc, char *argv[]) {

  int f=1252; // variable locale
 
  printf("La variable nombre est � l'adresse : %p\n",(void *) &nombre);
  printf("Le tableau msg est � l'adresse : %p\n",(void *)msg);
  printf("La variable locale f est � l'adresse : %p\n",(void *) &f);

  printf("La fonction main est � l'adresse : %p\n",main);
  printf("La fonction max est � l'adresse : %p\n",max);

  /// ...
  ///BBB
  printf("///FACT\n");
  compute();

  return(EXIT_SUCCESS);
}

