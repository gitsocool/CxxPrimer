#include <iostream>
 #include <string>
struct Sales_data{
std::string bookNo,book_name;
unsigned  unit_sold;
double revenue;

};

int main(){
Sales_data sd;

std::cout << sd.unit_sold <<"\f"<< sd.bookNo <<"\f" <<sd.revenue << std::endl;
return 0;
}
