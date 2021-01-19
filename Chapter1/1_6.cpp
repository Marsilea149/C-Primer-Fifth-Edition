#include <iostream>

int main()
{
    /* Code from the question:
    int v1 = 3, v2 = 4;
    std::cout << "The sum of " << v1;
    << " and " << v2;
    << " is " << v1 + v2 << std::endl;
    */
    /* Result from the compiler:
    $ g++ -o 1_6 1_6.cpp
    1_6.cpp: In function 'int main()':
    1_6.cpp:7:5: error: expected primary-expression before '<<' token
        << " and " << v2;
        ^~
    1_6.cpp:8:5: error: expected primary-expression before '<<' token
        << " is " << v1 + v2 << std::endl;

    The program is illegal, because std::cout are ;issing in line 7 & 8. Thus, << operator does not have left-hand operand, which is supposed to be an ostream object.
    */

    // After correction:
    int v1 = 3, v2 = 4;
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
}
