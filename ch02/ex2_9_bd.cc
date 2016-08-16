/*
 *both int i {3.14} and i2 =3.14 will not be error,but truncated,that's
 *a bit different from the book.
 *
 * */
#include <iostream>

int main(){
  int i {3.14};
  int i2 =3.14;

 std::cout << i <<"\t"<<i2 <<std::endl;
  return 0;
}
