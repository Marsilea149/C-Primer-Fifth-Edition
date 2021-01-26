#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "Please enter two transactions of the same book: " << std::endl;
    Sales_item book1;
    Sales_item book2;
    Sales_item sum;
    std::cin >> book1 >> book2;
    if (book1.isbn() == book2.isbn())
    {
        sum = book1 + book2;
        std::cout << sum << std::endl;
    }
    return 0;
}