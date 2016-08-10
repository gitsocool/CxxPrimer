#include <iostream>
#include "/home/centos1/Documents/c++primer/GCC_pre_C11/1/Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    }
    else {
        std::cerr << "Data must refer to same ISBN." << std::endl;
        return -1;
    }
}
