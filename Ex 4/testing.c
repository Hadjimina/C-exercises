#include <stdio.h>

int main(){

  char A[3]= {'q','2','3'};
  char *B[3];
  char **C[3];
  B[0] = &A[0];
  B[1] = &A[1];
  B[2] = &A[2];
  C[0] = &B[0];

  int i,size = 0;

  for(i = 0; i < 3 ;i++){
    size += sizeof(B[i]);
  }
  printf("%c \n", **C[0]);
}
