#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

bool  compare(int *begin1,int *end1,int *begin2,int *end2)
{
    if( (begin1-end1) != (begin2-end2) ) return false;
    else
    {
          for(auto i=begin1,j=begin2; i!=end1 && j!=end2 ;i++,j++)
         { 
                if( *i != *j ) return false;
         }
    }
    return true;      

}

int main()
{
  int arr1[]={1,2,3};
  int arr2[]={1,2,3};

  auto equal=compare(begin(arr1),end(arr1),begin(arr2),end(arr2) ) ;  
  if(equal)     
    cout<<" the two arrays are equal "<<endl;
  else  cout<<" the two arrays are not  equal "<<endl;

  vector<int>  v1 {76,567,99};
  vector<int> v2 {11,33,55};

  if(v1==v2)    
     cout<<" the two vectors are equal "<<endl;
  else 
    cout<<" the two vectors are not  equal "<<endl;
 
   return 0;
}
