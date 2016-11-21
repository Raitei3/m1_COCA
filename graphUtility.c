#include <stdlib.h>
#include <stdio.h>
#include "all.h"



void graphGenerator(int **t){

  int s = orderG();
  int count = s;
/*
  t = malloc(sizeof(int)*s);

  for (int i = 0; i < count; i++) {
    printf("%d\n",s );
    t[i]=malloc(sizeof(int)*s);
  }

  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count; j++) {
      printf("%d,%d\n",i,j );
      t[i][j]=0;
    }
  }
*/
  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count; j++) {
      if(i!=j){
        int x= are_adjacent(i,j);
        printf("%d\n",x);
        t[i][j]=x;
      }

      else
      t[i][j]=0;
    }
  }
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
