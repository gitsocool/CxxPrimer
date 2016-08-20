/*
 * error: assigning the address of a double to a pointer to int
 *
 * */
#include <iostream>
int main(){
  int i=9;
  double * p=&i;
  return 0;
}
