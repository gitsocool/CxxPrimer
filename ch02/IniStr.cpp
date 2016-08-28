#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::endl;
using std::cout;

int main(){
  string a;

  string b="wo shi b";

  string c("wo shi c");
  string c2=("wo shi c2");

  int  i1(1);
  int  i2=(2);

//  int i3{3};
 // int i4={4};
  
//  string d {"wo shi d"};//error ,only () is ok;
  //string d2={"wo shi d"}
  string e(5,'d');
  
  cout <<a <<"\t" <<b <<"\t"
     //<<b2 <<"\t"
     <<c <<"\t"
     <<c2 <<"\t" 
     <<i1 <<"\t"
    <<i2 <<"\t"
  //    <<i3 <<"\t"
    //  <<i4 <<"\t"    
    //<< d<<"\t"
     // <<d2 <<"\t" 
       <<e << endl;

 return 0;  
  


}
