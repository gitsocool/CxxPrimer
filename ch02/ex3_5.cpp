#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;//wrong to add with  ,std::string
using std::string; 
 int main(){
 string a ,b, c;
   while(cin >> a){
     b+=a;
     c+=" "+a;
   }
  cout <<" to concatenate: "<< b <<endl; 
 

  cout <<" to seperate: "<< c <<endl;

 
  return 0;
 }
