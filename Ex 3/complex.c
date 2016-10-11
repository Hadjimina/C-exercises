#include "complex.h"
#include <math.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

complex add(complex first ,complex second){
  struct complex  complexReturn ;
  complexReturn.a = first.a + second.a;
  complexReturn.b = first.b + second.b;

  return complexReturn;
}

complex sub(complex first ,complex second){
  struct complex  complexReturn ;
  complexReturn.a = first.a - second.a;
  complexReturn.b = first.b - second.b;

  return complexReturn;
}

complex mult(complex first ,complex second){
  struct complex  complexReturn ;
  complexReturn.a = first.a * second.a - first.b * second.b;
  complexReturn.b = first.a*second.b + first.b * second.a;

  return complexReturn;
}

complex div(complex first ,complex second){
  struct complex  complexReturn ;
  double divisor = pow(second.a,2)+ pow(second.b,2);



  complexReturn.a = (first.a * second.a + first.b * second.b)/divisor;
  complexReturn.b =  (first.b * second.a - first.a*second.b)/divisor;

  return complexReturn;
}

void print(complex toPrint){
  printf("%f + %f i\n",toPrint.a,toPrint.b );
}


struct complex_set *alloc_set(struct complex c_arr[], int size){
   complex_set *ptr = (complex_set *)malloc(sizeof(complex_set));



   complex* items = (complex *)malloc(sizeof(complex)*size);

   if (!ptr || !items) {
     printf("Error allocating set\n");
     exit(-1);
   }

   for (size_t i = 0; i < size; i++) {
 		items[i] = c_arr[i];
 	}

   ptr->points = items;

   ptr->num_points_in_set = size;


   return ptr;

}


void free_set(struct complex_set *set){
  free(set->points);
  free(set);
}

void printSet(complex_set toPrint){
  int i = 0;
  for ( i = 0; i < toPrint.num_points_in_set; i++ ) {
      printf("Element %d) : ",  i );
      print( *(toPrint.points + i));
   }
}
