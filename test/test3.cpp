#include<iostream>
#include<cstdlib.h>
using namespace std;
int main()
{
char a[] = "hello";
a[0] = 'X';
cout << a << endl;
char *p = "world"; 
p[0] = 'X';
cout << p << endl;
cout <<endl;
return 0;
}
