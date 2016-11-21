#include <stdlib.h>
#include <stdio.h>
#include "all.h"


int main(){
  printf("maintamere\n");
  int x = orderG();
  int **t;
  t = malloc(sizeof(int)*x);

  for (int i = 0; i < x; i++) {
    printf("%d\n",i );
    t[i]=malloc(sizeof(int)*x);
  }

  graphGenerator(t);
  printGraph(t);
  return 1;
}
