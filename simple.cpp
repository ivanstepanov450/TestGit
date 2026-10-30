#include <iostream>

unsigned long long factorial(int n) {
    if (n < 0) return 0;
    unsigned long long r = 1;
    for (int i = 2; i <= n; ++i) r *= i;
    return r;
}

int main() {
    int n;
    std::cout << "n = ";
    if (!(std::cin >> n)) return 1;
    std::cout << n << "! = " << factorial(n) << "\n";
}