#include <stdlib.h>
#include <stdio.h>
#include "all.h"



int** graphGenerator(){

  int s = orderG();
  int count = s;
  int** t = malloc(sizeof(int)*s);
  for (int i = 0; i < count; i++) {
    t[i]=malloc(sizeof(int)*s);
  }

  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count; j++) {
      if(i!=j){
        int x= are_adjacent(i,j);
        t[i][j]=x;
      }
      else
      t[i][j]=0;
    }
  }
  return t;
}


void printGraph(int** t){
  int s = orderG();
  int count = s;
  for (size_t i = 0; i < count; i++) {
    printf("\n");
    for (size_t j = 0; j < count; j++) {
      printf("%d ",t[i][j]);
    }
  }
  printf("\n" );
}
