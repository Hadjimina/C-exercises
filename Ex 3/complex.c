#include "complex.h"
#include <math.h>
#include <stdio.h>

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
