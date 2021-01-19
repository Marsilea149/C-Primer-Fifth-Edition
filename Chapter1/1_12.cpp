#include <iostream>

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << "The sum is: " << sum << std::endl; //The sum is 0.
    return 0;
}