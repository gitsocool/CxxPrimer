#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;//wrong to add with  ,std::string
using std::string; 
int main(){
  string a,b,c;
  cin >> a >>b ;
  if(a!=b){
       a>b?c=a:c=b ;
       cout << c <<" is larger " <<endl;
   }else{
      cout << a <<" is equal to "<< b <<endl;
    }

 

 auto la=a.size(),lb=b.size();

   if(la!=lb){
          la>lb?c=a:c=b ;
       cout << c <<" is longer " <<endl;         
    }else{
     cout << "the two string has the same length"<<endl;
    } 

   
return 0;
}
