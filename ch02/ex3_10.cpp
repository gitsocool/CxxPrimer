#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string a;
  
  while(getline(cin,a)){
    for(auto &c:a){
            if(ispunct(c))                            
             c='\40';
         }
     cout << a <<endl;
      
  }

return 0;
}
