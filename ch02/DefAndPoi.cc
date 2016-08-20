#include<iostream>
extern int i;
int j;
int main(){

 //Test for extern

//   extern int i=8;
//   std::cout << i<< std::endl;
//   std::cout << j<< std::endl;


   
//Test for const qualifier
/*
 *
 *
 * 
int a=7; 
   const double b=a;
   
   double c=b;
   
   std::cout << b << "\t" << c << std::endl;  
*/
    
//Test for reference 
/*const double  hhh=878;
const  int  &r=0,;
const double &f;
   f=hhh;

 std::cout<< r << std::endl;  
*/
 
//Test for pointer
  //int a=8;
 // const  double * pt=&a;
  //std::cout << *pt << std::endl;
  
  //int b=9;
  //const int *pt2=&b;
  //std::cout << *pt2 << std::endl;

   int c=11;
   const int  *const pt3=&c;
//   *pt3=88;
   int d=55;
   const int * pt4;
    pt4=&d; 
    std::cout << *pt4 << std::endl;  

return 0;
}
