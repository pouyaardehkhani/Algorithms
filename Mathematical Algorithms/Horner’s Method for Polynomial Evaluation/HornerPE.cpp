int horner(int poly[], int n, int x) {
    int result = poly[0]; // Initialize result
    // Evaluate value of polynomial using Horner's method
    for (int i = 1; i < n; i++)
        result = result * x + poly[i];
    return result;
}