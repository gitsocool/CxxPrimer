#include<iostream>

int main (){
  int a=7,b=65;
  int *p=0;
  //std::cout << *p <<std::endl;
  p=&a;
  std::cout << *p << std::endl;
  *p=b;
  std::cout << *p <<std::endl;
  return 0;
 

}
