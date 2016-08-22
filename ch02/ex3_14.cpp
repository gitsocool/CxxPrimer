#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
 int main(){
   vector<int> a;
   int b;
  while(cin >> b){
         a.push_back(b);
    }
      for(auto c:a)
       cout <<c<<endl;
   
  
   return 0;
}
