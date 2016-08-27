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
     for(decltype(set.size()) i=0 ;i<set.size()-1 ;i++)
       {
          cout <<set[i]+set[i+1]<<"\t";  
        }   
      cout << endl;

     cout << " sum of first and last ,second and second-last so on...  "<<endl;
     for(decltype(set.size()) i=0,j=set.size()-1;i!=j;i++,j--)
       {
         cout <<set[i]+set[j]<<"\t";                 
       }  
      cout<< endl;      

return 0;
}
