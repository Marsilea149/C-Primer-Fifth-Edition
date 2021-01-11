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