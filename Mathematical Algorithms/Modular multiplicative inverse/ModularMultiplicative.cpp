#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int NaiveModInverse(int a, int m){
    for (int x = 1; x < m; x++)
        if (((a%m) * (x%m)) % m == 1)
            return x;
}

int EAModInverse(int a, int m){
    int m0 = m;
    int y = 0, x = 1;
    if (m == 1)
        return 0;
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;
    return x;
}

int power(int x, unsigned int y, unsigned int m){
    if (y == 0)
        return 1;
    int p = power(x, y / 2, m) % m;
    p = (p * p) % m;
    return (y % 2 == 0) ? p : (x * p) % m;
}

int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void PrimeModInverse(int a, int m){
    int g = gcd(a, m);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        cout << "Modular multiplicative inverse is "
             << power(a, m - 2, m);
    }
}