#include <iostream>
using namespace std;

int main() {
    int product = 1;
    for (int i = 2; i <= 100; i++) {
        bool is_prime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            product *= i;
        }
    }
    cout << "The product of prime numbers between 1 and 100 is: " << product << endl;
    return 0;
}
