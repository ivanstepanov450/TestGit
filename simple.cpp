#include <iostream>

unsigned long long factorial(int n) {
    if (n < 0) return 0;
    unsigned long long r = 1;
    for (int i = 2; i <= n; ++i) r *= i;
    return r;
}

int main() {
    for (int n : {0, 1, 5, 10}) {
        std::cout << "factorial(" << n << ") = " << factorial(n) << "\n";
    }
    return 0;
}