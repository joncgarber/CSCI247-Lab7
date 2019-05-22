#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int accumulator = 0;
  int matrixSize;
  int arg2;

  sscanf(argv[1], "%d", &matrixSize);
  sscanf(argv[2], "%d", &arg2);
  
  int matrix[matrixSize][matrixSize];

  for(int i = 0; i < matrixSize; i++){
    for(int e = 0; e < matrixSize; e++){
      matrix[i][e] = i + e;
    }
  }

  printf("arg2: %d\n",arg2);
  switch(arg2){
    
  case 1:
    for(int i = 0; i < matrixSize; i++){
      for(int e = 0; e < matrixSize; e++){
	accumulator += matrix[i][e];
      }
    }
    break;

  case 2:
    for(int i = 0; i < matrixSize; i++){
      for(int e = 0; e < matrixSize; e++){
	accumulator += matrix[e][i];
      }
    }
    break;

  default:
    printf("ERROR");
    break;
  }

  printf("%d\n",accumulator);
    
}
