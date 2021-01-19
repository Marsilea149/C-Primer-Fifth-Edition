#include <iostream>

int main()
{
    // std::cout << "Read each file." << std::endl :
    /*
    1_15.cpp: In function 'int main()':
    1_15.cpp:5:48: error: expected ';' before ':' token
    std::cout << "Read each file." << std::endl :
    */

    // std::cout << "Update master. << std::endl;
    /*
    1_15.cpp:14:18: warning: missing terminating " character
    std::cout << "Update master. << std::endl;
                ^
    1_15.cpp:14:18: error: missing terminating " character
    std::cout << "Update master. << std::endl;
                ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    1_15.cpp: In function 'int main()':
    1_15.cpp:16:9: error: expected primary-expression before 'return'
            return 0;
            ^~~~~~
    */

    // std::cout << "Write new master" std::endl;
    /*
    1_15.cpp: In function 'int main()':
    1_15.cpp:27:36: error: expected ';' before 'std'
     std::cout << "Write new master" std::endl;
     */
    return 0;
}