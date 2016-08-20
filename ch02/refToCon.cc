#include <iostream >

int main(){
const int c1=21;
const  int &f=c1;

f=33;
int &g=c1;
return 0;

}
