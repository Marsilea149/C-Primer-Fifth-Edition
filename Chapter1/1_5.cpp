#include <iostream>

int main()
{
    int v1, v2;
    std::cout << "Please enter two numbers that you eant to do multiplication: " << std::endl;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << v1;
    std::cout << " * ";
    std::cout << v2;
    std::cout << " = ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}