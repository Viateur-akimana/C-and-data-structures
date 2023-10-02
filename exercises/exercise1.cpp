#include <iostream>

namespace arithmetic {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "No number that  can be divided by zero" << std::endl;
            return 0;
        }
    }

    int modulus(int a, int b) {
        if (b != 0) {
            return a % b;
        } else {
            std::cout << "The module of number whose divisor is zero doesn't exist" << std::endl;
            return 0; 
        }
    }
}

int main() {
    char choice;
    do {
        std::cout << "MENU" << std::endl;
        std::cout << "1. Add\n";
        std::cout << "2. Subtract\n";
        std::cout << "3. Multiply\n";
        std::cout << "4. Divide\n";
        std::cout << "5. Modulus\n";
        std::cout << "Enter your choice: ";

        int operation;
        std::cin >> operation;

        if (operation < 1 || operation > 5) {
            std::cout << "Please enter a number btn 1 and 5." << std::endl;
            continue;
        }

        int num1, num2;
        std::cout << "Enter your two numbers: ";
        std::cin >> num1 >> num2;

        int result;
        switch (operation) {
            case 1:
                result = arithmetic::add(num1, num2);
                break;
            case 2:
                result = arithmetic::subtract(num1, num2);
                break;
            case 3:
                result = arithmetic::multiply(num1, num2);
                break;
            case 4:
                result = arithmetic::divide(num1, num2);
                break;
            case 5:
                result = arithmetic::modulus(num1, num2);
                break;
        }

        std::cout << "Result: " << result << std::endl;

        std::cout << "Continue? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Calculator terminated. Goodbye!" << std::endl;
    return 0;
}
