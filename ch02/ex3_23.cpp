#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){

    vector<int> a{1,2,3,4,5,6,7,8,9,10} ;

   for(auto it=a.begin();it!=a.end();it++)
              (*it)*=(*it);

    for(auto c:a)
    cout<<c<<endl;

return 0;
}
