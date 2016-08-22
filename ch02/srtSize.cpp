#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){

  string a;

  while(getline(cin,a)){
     auto size=a.size();
     cout << " original size is " << size <<endl;
     
    //a+='\0';
    a+="wo ai HaiNan";
     size=a.size();
    cout << " the added size "<<size <<endl; 

     }

return 0;
}
