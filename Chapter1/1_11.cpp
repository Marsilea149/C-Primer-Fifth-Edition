#include <iostream>

int main()
{
    int v1, v2;
    std::cout << "Please enter 2 integers: " << std::endl;
    std::cin >> v1 >> v2;
    int num = std::min(v1, v2);
    while (num <= std::max(v1, v2))
    {
        std::cout << num << std::endl;
        ++num;
    }
    return 0;
}