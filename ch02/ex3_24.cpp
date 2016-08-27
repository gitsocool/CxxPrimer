#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{

 int a;
   vector<int> set;   
 
    cout << " please input a set of intergers  "<<endl;
    while(cin >> a)
     {
        set.push_back(a);
     }

       if (set.size() <= 1) {
        cout << "pleast input at least two elements "<<endl;
        return -1;
        }
   
       cout << " sum of each pair of adjacent elements  "<<endl;      
       for(auto i=set.cbegin();i!=set.cend()-1;i++)
         {
             cout<<*i+*(i+1)<<"\t";  
         }
          cout <<endl;  
       
     cout << " sum of first and last ,second and second-last so on...  "<<endl;
      for(auto i=set.cbegin(),j=set.cend()-1;i!=j;i++,j--)
        {
           cout <<*i+*j<<"\t";
         }   
   cout <<endl;
return 0;
}
