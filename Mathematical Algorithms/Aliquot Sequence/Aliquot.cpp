#include <bits/stdc++.h>
using namespace std;

// Function to calculate sum of all proper divisors
int getSum(int n) {
    int sum = 0;  // 1 is a proper divisor
    // Note that this loop runs till square root of n
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal, take only one of them
            if (n / i == i)
                sum = sum + i;
            else // Otherwise take both
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    // calculate sum of all proper divisors only
    return sum - n;
}

// Function to print Aliquot Sequence for an input n.
void printAliquot(int n) {
    // Print the first term
    printf("%d ", n);
    unordered_set<int> s;
    s.insert(n);
    int next = 0;
    while (n > 0) {
        // Calculate next term from previous term
        n = getSum(n);
        if (s.find(n) != s.end()) {
            cout << "\nRepeats with " << n;
            break;
        }
        // Print next term
        cout << n << " ";
        s.insert(n);
    }
}