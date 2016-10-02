#include <stdio.h>
#include <string.h>

//Problem 1
void reverseArray(int array[], int n){

    printf("1. Problem :\n");
    //print original
    printf("original\n");
    for(int i = 0; i < n; i++){
      printf("%d ,",array[i]);
    }
    printf("\n");

  int nMinus = n-1;

  //perform reverse
  for(int a = 0; a < n/2; a++){
    int dummy = array[nMinus - a];
    array[nMinus - a] = array[a];
    array[a]= dummy;
  }

  //print new
  printf("reversed \n");
  for(int i = 0; i < n; i++){
    printf("%d ,",array[i]);
  }

printf("\n\n" );
}

//Problem 2
void firstWhiteSpaced(char sentance[]){
  printf("2. Problem :\n");
  //print straing
  printf("Entire String is: %s \n", sentance);
  int length = strlen(sentance);


  printf("Single Word :\n" );
  for ( int i = 0;  i < length;  i++) {
    if (sentance[i] == ' '){
      break;
    }
    else{
      printf("%c",sentance[i] );
    }
  }
  printf("\n\n" );
}


//Problem 4
void endianCheck(){
  int a = 43981; //0xABCD

  unsigned char byte1 = *((unsigned char *) &a);
  unsigned char byte2 = *((unsigned char *) &a +1);

  printf("4.Problem \n" );
  if ((unsigned)byte1 != '205') {
    printf("Machine is Little Endian\n\n" );
  }else{
    printf("Machine is Big Endian\n\n" );
  }

}

//Problem 6
int acceptingFunction(int (*functionPtr)(int),int array[],int n) {

  printf("6.Problem \n" );
  //print original
  printf("original\n");
  for(int i = 0; i < n; i++){
    printf("%d ,",array[i]);
  }
  printf("\n");


    for (int i = 0; i < n; i++){
      array[i] = (*functionPtr)(array[i]);
    }

    //print original
    printf("changed\n");
    for(int i = 0; i < n; i++){
      printf("%d ,",array[i]);
    }
    printf("\n");

}

int comp(int a)
{
  if (a <= 0) return 0;
  else return 1;
}

int main(){

  //PROBLEM 1***********
  //setup array
  int potato[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  int size = 13;

  //call function
  reverseArray(potato,size);

  //Problem 2*****************
  char string[] = "Hello, world!";

  firstWhiteSpaced(string);

  //PROBLEM 4 ***************
  endianCheck();

  //PROBLEM 6 *******************
  int potato1[]={-1,3,-27};
  acceptingFunction(comp,potato1,3);
}
