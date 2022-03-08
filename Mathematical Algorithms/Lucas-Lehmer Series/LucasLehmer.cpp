#include <iostream>
#include <vector>
using namespace std;

// Function to find out first n terms (considering 4 as 0th term) of Lucas-Lehmer series.
void LucasLehmer(int n) {
    // the 0th term of the series is 4.
    unsigned long long current_val = 4;
    // create an array to store the terms.
    vector<unsigned long long> series;
    // compute each term and add it to the array.
    series.push_back(current_val);
    for (int i = 0; i < n; i++) {
        current_val = current_val * current_val - 2;
        series.push_back(current_val);
    }
    // print out the terms one by one.
    for (int i = 0; i <= n; i++)
        cout << "Term " << i << ": " << series[i] << endl;
}