#include "complex.h"

int main(){
  struct complex First;
  struct complex Second;

  First.a = 2;
  First.b = 3;
  Second.a = 2;
  Second.b = 3;

  print(add(First,Second));
  print(sub(First,Second));
  print(mult(First,Second));
  print(div(First,Second));
}
