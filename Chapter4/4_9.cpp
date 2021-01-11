#include <iostream>

int main()
{
    const char *cp = "Hello World";

    std::cout << "*cp = " << *cp << std::endl; //H
    std::cout << "cp = " << cp << std::endl;   //Hello World

    if (cp && *cp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}