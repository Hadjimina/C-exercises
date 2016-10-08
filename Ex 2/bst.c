#include <stdio.h>
#include <string.h>
#include "bst.h"
#include <stdlib.h>
#include <assert.h>



void *insert(Node *head, int number) {
  Node *nodeToAdd = (Node *) malloc(sizeof(Node));
  nodeToAdd->element = number;

  Node *dummyLeft = (Node *) malloc(sizeof(Node));
  Node *dummyRight = (Node *) malloc(sizeof(Node));


  if (head->element > number) {
    head->left.element = number;
  }
  else {
    head->right.element = number;
  }

}

int main(){


  Node *list;
  list->element = 5;
  insert(list,6);

  return 0;

}
