#include <iostream>
#include <cmath>

int main() {
    std::cout << "x = ";
    float x; // x < 710 sonst exp(x) = inf
    std::cin >> x;
    std::cout << "exp(" << x << ") = " << exp(x) << std::endl;
}