#include "complex.h"

int main(){
  struct complex First;
  struct complex Second;

  First.a = 13;
  First.b = 25;
  Second.a = 64;
  Second.b = 9;

  complex arr[] = {First,Second};
  complex_set *set = alloc_set(arr,2);

  print(add(First,Second));
  print(sub(First,Second));
  print(mult(First,Second));
  print(div(First,Second));

  printSet(*set);

  free_set(set);
}
