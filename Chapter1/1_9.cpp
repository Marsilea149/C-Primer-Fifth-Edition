#include <iostream>

int main()
{
    int num = 50;
    int sum = 0;
    while (num <= 100)
    {
        sum += num;
        ++num;
    }
    std::cout << "The sum from 50 to 100 is: " << sum << std::endl;
    std::cout << "The sum from 50 to 100 with formula is: " << (50 + 100) * 51 / 2 << std::endl;
    return 0;
}