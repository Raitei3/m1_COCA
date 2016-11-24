
#include "all.h"


int main(int argc ,char** argv){
  int s = orderG();
  int a = sizeG();
  int k = atoi(argv[1]);
  int x = s * k;
  int y = (pow(2,k)*a+factorielAddition(k-1)*s);
  FILE* fd = fopen("graph.cnf","w+");


/*  int tube[2];

  pipe(tube);

  pid_t pid = fork();
  if (pid == 0) {
    //printf("fils\n" );
    close(tube[0]);
    dup2(1,tube[1]);
    printf("c\nc %s \nc\n",argv[0]);
    printf("p cnf %d %d\n",x,y);

    int** t=graphGenerator();
    //printGraph(t);
    cnfGenerator(t,k);
    return 1;
  }
  else {
    //printf("pêre");
    int status;
    waitpid(-1,&status,0);
    close(tube[1]);
    dup2(0,tube[0]);
    printf("ddddddddddddddddddddddddddddddddddddddddddddddd\n" );

  }*/

  fprintf(fd,"c\nc %s \nc\n",argv[0]);
  fprintf(fd,"p cnf %d %d\n",x,y);
  int** t=graphGenerator();
  //printGraph(t);
  cnfGenerator(t,k,fd);
  free(fd);
  //system("./glucose_static -model graph.cnf");
  execlp("./glucose_static","glucose_static","-model","graph.cnf",0);
  return 1;



}
