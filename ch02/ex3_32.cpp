#include <cstddef>
#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::iterator;

int main()
{
  size_t a[10];
  for(size_t i=0;i!=10;i++)
  {
    a[i]=i;
  }

  size_t b[10];
    for(size_t i=0;i!=10;i++)
  {
    b[i]=a[i];
  }

   vector<size_t> c(10);
   for (auto i=c.begin();i!=c.end();i++)
  {
      *i=i-c.begin();
  }
 
  vector<size_t> d(c);

 for(auto e:d)
{
  cout<<e<<" ";
}

cout <<endl;
return 0;
}
