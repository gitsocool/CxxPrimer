#include<iostream>
int main(){
  const int i=7, &r=i;
  float gg=698.56;

  auto a=i;
  decltype (i) b=33;
  a=8;
  //b=66;//error , for b is const int ,cannot be changed the value;
  std::cout << a <<"\t" <<b << std::endl;
  
  auto c=r;//r2 an int;
  decltype(r)  d=gg;//d is a reference to const int
  c=99;
  d=666.66;//error ,for d has type of const int &;
  
  std::cout << c <<"\t" <<d << std::endl;
  

  

  return 0;

}
