#include <iostream>

void swapNumbers(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int a = 5, b = 10;
    
    std::cout << "Before swapping:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    
    swapNumbers(a, b);
    
    std::cout << "After swapping:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    
    return 0;
}
