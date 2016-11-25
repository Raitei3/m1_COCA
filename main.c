
#include "all.h"


int main(int argc ,char** argv){
  int s = orderG();
  int a = sizeG();
  int k = atoi(argv[1]);
  int x = s * k;
  int y = (pow(2,k)*a+factorielAddition(k-1)*s);

  printf("c\nc %s \nc\n",argv[0]);
  printf("p cnf %d %d\n",x,y);
  int** t=graphGenerator();
  cnfGenerator(t,k);
  return 1;



}
