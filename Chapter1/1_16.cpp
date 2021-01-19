#include <iostream>

int main()
{
    std::cout << "Please enter several integers: " << std::endl;
    int val = 0;
    int sum = 0;
    while (std::cin >> val)
    {
        sum += val;
    }
    std::cout << "The sum of the values you entered is: " << sum << std::endl;
    return 0;
}