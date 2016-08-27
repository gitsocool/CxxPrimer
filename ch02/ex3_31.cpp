#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{ 
size_t n=10;
int array[n];

for(size_t b=0;b<n;b++)
  array[b]=b;

for(auto c:array)
{
  cout<< c<<" ";
}
cout<<endl;
return 0;
}
