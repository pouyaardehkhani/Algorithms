#include <iostream>
using namespace std;

int printTrib(int n) {
    int dp[n];
    dp[0] = dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i < n; i++)
        dp[i] = dp[i - 1] +
                dp[i - 2] +
                dp[i - 3];

    for (int i = 0; i < n; i++)
        cout << dp[i] << " ";
}