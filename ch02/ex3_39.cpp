#include<iostream>
#include<string>
#include<cstring>
using std::cout;
using std::endl;
using std::string;
int main()
{ 
  string s1="wueyt vurhew", s2="wuehuihwuhgsyjhyggyg";
  
  if(s1==s2)cout <<"  equal "<<endl;
    else if (s1<s2)cout <<" s2 is larger "<<endl;
         else cout <<" s1 is larger "<<endl;

  char c1[]={'h','e','l','l','o','\0'}, c2[]="world";
   if(strcmp(c1,c2)==0) cout <<"  equal "<<endl;
      else if(strcmp(c1,c2)<0) cout <<" c2 is larger "<<endl;
          else cout <<" c1 is larger "<<endl;

  return 0;
}
