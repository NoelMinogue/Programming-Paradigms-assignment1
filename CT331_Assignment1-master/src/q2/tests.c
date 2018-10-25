#include <stdio.h>
#include "tests.h"
#include "LinkedList.h"
#include "LinkedList.c"
#include "tests.h"
#include "LinkedList.h"


void runTests(){
  printf("Tests running...\n");
  listElement* l = createEl("Test String (1).", 30);


  //Test create and traverse
  traverse(l);
  printf("\n");

  //Test insert after
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  insertAfter(l2, "a final string (3)", 30);
  traverse(l);
  printf("\n");

  // Test delete after
  deleteAfter(l);
  traverse(l);
  printf("\n");

  //Returns the number of elements in a linked list  
  printf("Length of List: %d \n", length(l));
  

 
  listElement** dp = &l;
  push(dp , "Please work", 30);
  printf("size after push: %d \n", length(*dp));

  
  
  
  pop(dp);
  prinf("size after pop: %d \n", length(*dp));




  printf("\nTests finished.\n");
}
