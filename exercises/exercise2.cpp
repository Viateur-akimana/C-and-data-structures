#include<iostream>
using namespace std;
int main() {
    int a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    int sum = a + b;
    
    cout << "The sum of " << a << " and " << b << " is: " << sum << std::endl;
    
    return 0;
}

