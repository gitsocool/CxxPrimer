#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
 int main(){
   string a;
   vector<string> vec;
   while(cin >> a){         
          vec.push_back(a);    
     }
    
  
     for(decltype (vec.size()) index=0;index<vec.size();index++ ){

        for(auto &r2:vec[index])
           r2=toupper(r2);
           cout <<vec[index] <<" ";
       if((index+1)%8==0) cout<<endl;
     }
  
     cout << endl;
 return 0;
}
