#include <iostream>

int add(int a, int b);
int subtract(int a, int b);

int main() {
    int a = 5, b = 3;
    std::cout << "Sum: " << add(a, b) << std::endl;
    std::cout << "Difference: " << subtract(a, b) << std::endl;
    return 0;
}