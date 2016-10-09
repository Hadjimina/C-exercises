#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  FILE * fp;
  FILE * fpWrite;

  char zip[4], buffer[148], values[9][150],totalString[7],dummy[4];

  strcpy(dummy, "\"25\"");
  int i,total,zipInt,agr =0;


  fp = fopen("stateoutflow0708.txt","r");
  fpWrite = fopen("report.txt","w+");
  if (fp == NULL || fpWrite == NULL){
    printf("ERROR\n");
  }else{

    //write heading
    fputs("STATE    TOTAL\n",fpWrite);
    fputs("---------------\n",fpWrite);

    //iterator over file
    while(!feof(fp)){

      fscanf(fp, "%s %s %s %s %s %s %s %s %s",values[8],values[7],values[6],values[5],values[4],values[3],values[2],values[1],values[0]);

      if(strcmp(values[8],dummy)==0){

        fputs(values[3],fpWrite);
        fputs("     ",fpWrite);
        fputs(values[0],fpWrite);
        fputs("\n",fpWrite);

        agr = atoi(values[0]);
        total += agr;
      }

    }
    fclose(fp);
    //write footer
    fputs("---------------\n",fpWrite);
    fputs("TOTAL    ",fpWrite);
    sprintf(totalString, "%d", total);
    fputs(totalString,fpWrite);

    fclose(fpWrite);
  }

}
