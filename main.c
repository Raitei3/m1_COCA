#include <stdlib.h>
#include <stdio.h>
#include "all.h"


int main(){
  int** t=graphGenerator();
  printGraph(t);
  return 1;
}
