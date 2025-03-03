#include <iostream>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    int a = 5, b = 3;
    std::cout <<  add(a, b) << std::endl;
    std::cout << subtract(a, b) << std::endl;
    std::cout << "Product: " << multiply(a, b) << std::endl;
    std::cout << divide(a, b) << std::endl;
    return 0;
}