/**************************************
 * fork.c
 * 
 * Programme d'exemple d'utilisation de 
 * fork
 *
 *************************************/
///AAA
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int g=0; // segment donn�es

int main (int argc, char *argv[])  {
  int l=1252; // sur la pile
  int *m;     // sur le heap
  m=(int *) malloc(sizeof(int));
  *m=-1;

  pid_t pid;

  pid=fork();

  if (pid==-1) {
    // erreur � l'ex�cution de fork
    perror("fork");
    exit(EXIT_FAILURE);
  }
  // pas d'erreur
  if (pid==0) {
    // processus fils
    l++;
    g++;
    *m=17;
    printf("Dans le processus fils g=%d, l=%d et *m=%d\n",g,l,*m);
    free(m);
    return(EXIT_SUCCESS);
  }
  else {
    // processus p�re
    sleep(2);
    printf("Dans le processus p�re g=%d, l=%d et *m=%d\n",g,l,*m);
    free(m);
    // ...
    return(EXIT_SUCCESS);
  }
}
///BBB
