#include <cmath>
#include <iostream>
void printJuggler(long long n) {
    long long a = n;
    // print the first term
    std::cout << a << " ";
    // calculate terms until last term is not 1
    while (a != 1) {
        long long b = 0;
        // Check if previous term is even or odd
        if (a % 2 == 0)
            // calculate next term
            b = floor(sqrt(a));
        else
            // for odd previous term calculate next term
            b = floor(sqrt(a) * sqrt(a) * sqrt(a));
        std::cout << b << " ";
        a = b;
    }
}