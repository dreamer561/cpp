
# Learning c++ from udemy

Welcome to the C++ learning repository! This repository is your guide to mastering C++ programming. Whether you're a beginner or looking to refresh your skills, this guide will provide you with comprehensive explanations and well-commented code examples.

## Table of Contents

1. **Introduction to C++**
   - **What is C++?**
   
     C++ is a powerful, general-purpose programming language that builds upon the foundation of the C language. It supports both procedural and object-oriented programming paradigms, making it versatile for various applications.

   - **Setting up your development environment**
   
     To start coding in C++, you'll need a C++ compiler (such as GCC, Clang, or Microsoft Visual C++) and an Integrated Development Environment (IDE) like Visual Studio Code, Xcode, or Code::Blocks.

2. **Basics of C++**
   - **Your first C++ program**
   
     Let's begin with the classic "Hello, World!" program:

     ```cpp
     #include <iostream>
     
     int main() {
         std::cout << "Hello, World!" << std::endl;
         return 0;
     }
     ```

   - **Variables and data types**
   
     C++ has various data types like `int`, `double`, `char`, and `bool`. Declare and use variables like this:

     ```cpp
     int age = 25;
     double pi = 3.14159;
     char grade = 'A';
     bool isStudent = true;
     ```

   - **Input and output**
   
     Use `std::cin` for input and `std::cout` for output:

     ```cpp
     int number;
     std::cout << "Enter a number: ";
     std::cin >> number;
     std::cout << "You entered: " << number << std::endl;
     ```

3. **Control Flow**
   - **Conditional statements**
   
     Use `if`, `else if`, and `else` to control program flow:

     ```cpp
     int x = 10;
     if (x > 5) {
         std::cout << "x is greater than 5." << std::endl;
     } else if (x == 5) {
         std::cout << "x is equal to 5." << std::endl;
     } else {
         std::cout << "x is less than 5." << std::endl;
     }
     ```

   - **Loops**
   
     C++ offers `for`, `while`, and `do-while` loops for repetition:

     ```cpp
     for (int i = 0; i < 5; ++i) {
         std::cout << "Iteration: " << i << std::endl;
     }
     
     int j = 0;
     while (j < 3) {
         std::cout << "Iteration: " << j << std::endl;
         ++j;
     }
     ```

4. **Functions**
   - **Creating and calling functions**
   
     Define and use functions for modular code:

     ```cpp
     int add(int a, int b) {
         return a + b;
     }
     
     int main() {
         int result = add(5, 3);
         std::cout << "Result: " << result << std::endl;
         return 0;
     }
     ```

   - **Parameters and return values**
   
     Functions can take parameters and return values. They can be of different data types:

     ```cpp
     double calculateAverage(double num1, double num2) {
         return (num1 + num2) / 2.0;
     }
     ```

   - **Function overloading**
   
     You can define multiple functions with the same name but different parameters:

     ```cpp
     int multiply(int a, int b) {
         return a * b;
     }
     
     double multiply(double a, double b) {
         return a * b;
     }
     ```

5. **Object-Oriented Programming (OOP)**
   - **Classes and objects**
   
     Create classes to encapsulate data and behavior:

     ```cpp
     class Rectangle {
     private:
         double width, height;
         
     public:
         Rectangle(double w, double h) : width(w), height(h) {}
         
         double calculateArea() {
             return width * height;
         }
     };
     ```

   - **Constructors and destructors**
   
     Constructors initialize objects, and destructors clean up resources:

     ```cpp
     class MyClass {
     public:
         MyClass() {
             std::cout << "Constructor called." << std::endl;
         }
         
         ~MyClass() {
             std::cout << "Destructor called." << std::endl;
         }
     };
     ```

   - **Inheritance and polymorphism**
   
     Use inheritance to create a hierarchy of classes:

     ```cpp
     class Animal {
     public:
         virtual void makeSound() {
             std::cout << "Animal sound" << std::endl;
         }
     };
     
     class Cat : public Animal {
     public:
         void makeSound() override {
             std::cout << "Meow" << std::endl;
         }
     };
     ```

6. **Memory Management**
   - **Pointers and references**
   
     Pointers store memory addresses, and references are aliases for variables:

     ```cpp
     int num = 10;
     int* ptr = &num;
     int& ref = num;
     ```

   - **Dynamic memory allocation**
   
     Allocate memory on the heap using `new` and deallocate with `delete`:

     ```cpp
     int* numPtr = new int;
     *numPtr = 42;
     delete numPtr;
     ```

   - **Smart pointers**
   
     Use smart pointers like `std::unique_ptr` and `std::shared_ptr` for safer memory management:

     ```cpp
     #include <memory>
     
     std::unique_ptr<int> uniquePtr = std::make_unique<int>(5);
     std::shared_ptr<int> sharedPtr = std::make_shared<int>(10);
     ```

7. **Standard Template Library (STL)**
   - **Containers**
   
     STL provides containers like vectors, lists, and maps:

     ```cpp
     #include <vector>
     #include <list>
     #include <map>
     
     std::vector<int> numbers = {1, 2, 3, 4, 5};
     std::list<std::string> names = {"Alice", "Bob", "Charlie"};
     std::map<int, std::string> idToName = {{1, "John"}, {2, "Jane"}};
     ```

   - **Algorithms**
   
     Use algorithms for sorting, searching, and more:

     ```cpp
     #include <algorithm>
     
     std::sort(numbers.begin(), numbers.end());
     auto it = std::find(names.begin(), names.end(), "Bob");
     ```

   - **Iterators**
   
     Iterators help traverse through container elements:

     ```cpp
     for (auto it = numbers.begin(); it != numbers.end() ++it); {
         std::cout << *it << " ";
     };
     ```


8. **Exception Handling**
   - **Try-catch blocks**
   
     Use try-catch to handle exceptions:

     ```cpp
     try {
         int result = divide(10, 0);
     } catch (const std::exception& e) {
         std::cerr << "Exception: " << e.what() << std::endl;
     }
     ```

   - **Throwing and catching exceptions**
   
     Throw exceptions to indicate errors and catch them to handle:

     ```cpp
     double divide(double a, double b) {
         if (b == 0) {
             throw std::runtime_error("Division by zero");
         }
         return a / b;
     }
     ```

9. **File Handling**
   - **Reading from and writing to files**
   
     Use file streams to read and write files:

     ```cpp
     #include <fstream>
     
     std::ofstream outFile("output.txt");
     outFile << "Hello, File!" << std::endl;
     outFile.close();
     
     std::ifstream inFile("input.txt");
     std::string line;
     while (std::getline(inFile, line)) {
         std::cout << line << std::endl;
     }
     inFile.close();
     ```

10. **Advanced Topics (Optional)**
    - **Templates**
    
      Templates allow writing generic functions and classes:

      ```cpp
      template <typename T>
      T maximum(T a, T b) {
          return (a > b) ? a : b;
      }
      ```

    - **Namespaces**
    
      Namespaces help prevent naming conflicts:

      ```cpp
      namespace Math {
          int add(int a, int b) {
              return a + b;
          }
      }
      
      int sum = Math::add(3, 4);
      ```

    - **Lambda expressions**
    
      Lambdas create anonymous functions:

      ```cpp
      auto square = [](int x) { return x * x; };
      int result = square(5);
      ```

    - **Multithreading basics**
    
      C++ supports multithreading for parallel execution:

      ```cpp
      #include <thread>
      
      void printNumbers() {
          for (int i = 0; i < 5; ++i) {
              std::cout << i << " ";
          }
      }
      
      int main() {
          std::thread t(printNumbers);
          t.join();
          return 0;
      }
      ```

## Getting Started

1. **Clone the Repository:**

   Clone this repository to your local machine using the command:

   ```sh
   git clone <repository_url>
   ```

2. **Navigate to Code Examples:**

   Navigate to the `code-examples` directory to access the code corresponding to each section.

3. **Compile and Run:**

   Open the code files in your chosen C++ IDE, compile, and run the examples. Each code file contains comments explaining the concepts and functionality.


---

