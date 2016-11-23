#include <stdlib.h>
#include <stdio.h>
#include "all.h"


int main(){
  int** t=graphGenerator();
  printGraph(t);
  printf("\n" );
  cnfGenerator(t,3);
  return 1;
}
