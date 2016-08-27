#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
int arr[]={1,2,3,45,6,87};
auto p1=begin(arr),p2=end(arr);

   while(p1!=p2)
     {
     *p1=0;
      ++p1;
     }

  for(auto i:arr){
      cout<<i<<" ";
     }
   cout<<endl;

return 0;
}
