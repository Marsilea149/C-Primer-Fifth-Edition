#include <iostream>

int main()
{
    std::cout << "/*"; // print out /*
    std::cout << "*/"; // print out */
    // std::cout << /* "*/ " */; //This is the one which is illegal
    std::cout << /* "*/ " /*  " /*" */; // print out /*
    return 0;
}