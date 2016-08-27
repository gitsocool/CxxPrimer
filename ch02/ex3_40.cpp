#include<iostream>
#include<cstring>
using std::cout;
using std::endl;

int main()
{
  char c1[] {"I LOVE "}, c2[]="HAINAN";
  
   strcat(c1,c2);
   char c3[strlen(c1)];

   strcpy(c3,c1);

   for(auto a:c3)
   {
      cout << a<< " ";
   }
  cout <<endl;
return 0;
}

