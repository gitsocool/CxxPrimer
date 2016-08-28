#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
char a;
vector<char> vec;
cout <<"please input some char s "<<endl;

while(cin>>a )
{
  vec.push_back(a);
}

 char arr[vec.size()];
 auto ptr=arr;
   
  for(auto c:vec)
   { 
      *ptr=c;
       ptr++;
    }
     
   for (auto c2:arr)
   {
     cout << c2 <<" " ;
   }

  cout << endl;
 
return 0;
}
