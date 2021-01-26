#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "Please enter several transactions of the same book: " << std::endl;
    Sales_item book1;
    Sales_item book;
    Sales_item sum;
    if (std::cin >> book1)
    {
        sum = book1;
        while (std::cin >> book)
        {
            if (book.isbn() == book1.isbn())
            {
                sum += book;
            }
            else
            {
                std::cout << " The sum of books of isbn: " << book1.isbn() << " is:  " << sum << std::endl;
                std::cout << "The sum ends because the isbn is no longer the same." << std::endl;
            }
        }
    }

    return 0;
}