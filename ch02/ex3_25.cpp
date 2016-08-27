#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
 cout <<"please inout grades"<<endl;
  vector<unsigned> scores(11,0);
  unsigned grade;
   while(cin >> grade)
     if(grade <=100)
        ++*(scores.begin()+grade/10);
  cout <<"the result is :"<<endl;
   for(auto a:scores)
   {
         cout << a<< "\t";
  }
   cout <<endl;
return 0;
}
