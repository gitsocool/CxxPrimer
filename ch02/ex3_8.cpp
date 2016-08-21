#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string s;
  cin >> s;
  
 //while
  decltype(s.size())  index=0;
  while(index<s.size()){
     s[index]=toupper(s[index]);
      index++;
    } 
   
   cout << s <<endl;

 //for
   for(decltype(s.size()) index=0;index<s.size();index++){
        
            s[index]=tolower(s[index]);
      
        }
  cout << s <<endl;

return 0;

}
