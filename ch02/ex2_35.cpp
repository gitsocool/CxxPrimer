#include<typeinfo>
#include <iostream>
int main (){

const int i= 42;//i is a const int;
auto j=i;// j is an int;

auto &k=i;//k is a reference to const int bound to i(i.e const int&); 
                
auto p =&i;//p is a pointer  to  const int (i.e const int*),
            //auto *p=&i ,will be same

const auto j2=i,&k2=i;//j2 is a const int; k2 is const int& ;

j=77;
//j2=66; //error :const int

//k=55; //error : k is const int&
//k2=88;//error : k2 is also const int&

std::cout << k <<"\t"  << *p <<"\t"  << j2 <<"\t"  << k2 <<std::endl;
  return 0;

}
