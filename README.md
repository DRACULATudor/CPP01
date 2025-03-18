CPP Module 01 - 42 School
Overview

This project is part of the C++ Modules at 42 School, focusing on object-oriented programming concepts such as memory allocation, references, and more. The goal is to strengthen understanding of C++ fundamentals while following the 42 coding standards.
Topics Covered

    Pointers and References
    Memory Allocation (new / delete)
    std::string Usage
    Function Overloading
    Namespaces

Installation & Compilation

    Clone the repository:

git clone https://github.com/your-username/cpp-module-01.git
cd cpp-module-01

Compile the project:

make

or, if there is no Makefile:

c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program

Run the program:

    ./program

Project Structure

📂 cpp-module-01
├── 📄 Makefile
├── 📂 src
│   ├── main.cpp
│   ├── ExampleClass.cpp
│   └── ExampleClass.hpp
├── 📂 includes
│   ├── ExampleClass.hpp
├── 📄 README.md
└── 📄 .gitignore

Usage

Run the compiled program to test different exercises related to C++ memory handling and references.
42 School Coding Standards

This project follows the strict 42 Norms, meaning:

    No forbidden functions (malloc is not allowed in C++ projects).
    Proper memory management (new / delete).
    Adherence to C++98 standard.
