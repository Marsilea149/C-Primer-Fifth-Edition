# Chapter 1. Getting Started
## Running the GNU Compiler

`$ g++ -o prog1 prog1.cpp`
`$`: system prompt
`-o`: an argument to the compiler
`prog1`: name of the file in which to put the executable file

`$ g++ -std=c++0x -o prog1 prog1.cpp`

`-std=c++0x`: turn on the c++11 support

Once the cpp file compiled, to run the executable:
`$ ./prog1` or `$ ./prog1.exe` 

`$?` is the return code from the last run process. `0` means no error happened. `Other values` represent some kind of unusual condition.

`#include <iostream>` should be in the beginning of a program if we want to use input output

`std::cout << "things to print" << std::endl; ` 
`<<` operator takes a left-operand (an ostream object) and a right-operand (string litteral)
`(std::cout << "things to print" )<< std::endl; `
`<<` returns left-hand operand, the result of the first operator becomes the left-hand operand of the second.

`std::cin >> variable; ` 
`>>` operator takes a left-operand (an istream object) and a right-operand (object)
`(std::cin >> v1) >> v2; ` 
`<<` returns left-hand operand, the result of the first operator becomes the left-hand operand of the second.

A string litteral: sequence of characters enclosed in double quotation marks.

`endl`: a manipulator. It ends the current line and flush the buffer associated with that device.

**istream used as a condition**: the effect is to test the state of the stream. 
If the stream is valid, the stream has not encountered an error, then the test succeeds.
If the stream becomes invalid, when we hit end-of-file or encounter an invalid input, such as reading a value that is not integer.

**end-of-file**
On Windows system, type `ctrl+z`, followed by enter or return key
On Unix system, type `ctrl+d`
