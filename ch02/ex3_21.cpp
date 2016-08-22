#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
void check(vector<int> a ){
  if(a.empty()){
       cout <<"size:0,no values"<< endl;
     }
    else{
       cout << "size: "<<a.size()<<". values: ";
        for (auto it=a.cbegin(); it!=a.cend();it++ )
             cout <<*it <<" ,";
        cout <<"\b."<<endl;
          }
       

}




void check(vector<string> a ){
  if(a.empty()){
       cout <<"size:0,no values"<< endl;
     }
    else{
       cout << "size: "<<a.size()<<". values: ";
        for (auto it=a.cbegin(); it!=a.cend();it++ )
             if(it->empty())
                 cout <<" null ";
              else
               cout <<*it <<" ,";
               cout <<"\b."<<endl;
          }


}



int main(){
vector<int> v1;
vector<int> v2(10);
vector<int> v3(10,42);
vector<int> v4{10};
vector<int> v5{10,42};
vector<string> v6{10};
vector<string> v7{10,"hi"};

check(v1);
check(v2);
check(v3);
check(v4);
check(v5);
check(v6);
check(v7);
 return 0;
}

