cmake_minimum_required(VERSION 3.29)
project(Chai_Aur_CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Chai_Aur_CPP
    .vscode/c_cpp_properties.json
    .vscode/launch.json
    .vscode/settings.json
    00_init/test.cpp
    00_init/test.exe
    01_varConst/data.c
    01_varConst/main.cpp
    02_primitives/Challange/challange1.cpp
    02_primitives/Challange/challange2.cpp
    02_primitives/Challange/challange3.cpp
    02_primitives/output/userInput.exe
    02_primitives/casting.cpp
    02_primitives/casting.exe
    02_primitives/data.cpp
    02_primitives/data.exe
    02_primitives/modifier.cpp
    02_primitives/modifier.exe
    02_primitives/myString.cpp
    02_primitives/myString.exe
    02_primitives/userInput.cpp
    02_primitives/userInput.exe
    03_operators/arithmetic.cpp
    03_operators/assign.cpp
    03_operators/logical.cpp
    03_operators/relatioin.cpp
    03_operators/tasks.md
    04_conditionals/taskFour.cpp
    04_conditionals/taskOne.cpp
    04_conditionals/tasks.md
    04_conditionals/taskThree.cpp
    04_conditionals/taskTwo.cpp
    challange1.md
    challange2.md
    challange3.md)
