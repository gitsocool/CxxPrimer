#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;
int main()
{
   int arr[]={'h','a','e','a','r','g'};
   vector<char> vec(begin(arr),end(arr));

   for(auto a :vec)
   {
     cout<< a<<endl; 
  } 

return 0;
}
