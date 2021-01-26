#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "Please enter a set of book transactions: " << std::endl;
    Sales_item book;
    while (std::cin >> book)
    {
        std::cout << book << std::endl;
    }
    std::cout << book << std::endl;

    return 0;
}