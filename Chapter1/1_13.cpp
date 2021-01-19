#include <iostream>

int main()
{
    /* Exercie 1.9 rewritten */
    int sum = 0;
    for (int num = 50; num <= 100; ++num)
    {
        sum += num;
    }
    std::cout << "The sum from 50 to 100 is: " << sum << std::endl;

    /* Exercie 1.10 rewritten */
    for (int num = 10; num >= 0; --num)
    {
        std::cout << num << std::endl;
    }
    return 0;
}