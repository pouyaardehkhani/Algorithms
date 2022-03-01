public class Zeckendorf {
    public static int nearestSmallerEqFib(int n) {
        // Corner cases
        if (n == 0 || n == 1)
            return n;

        // Find the greatest Fibonacci Number smaller
        // than n.
        int f1 = 0, f2 = 1, f3 = 1;
        while (f3 <= n) {
            f1 = f2;
            f2 = f3;
            f3 = f1 + f2;
        }
        return f2;
    }

    public static void printFibRepresntation(int n) {
        while (n > 0) {
            // Find the greates Fibonacci Number smaller
            // than or equal to n
            int f = nearestSmallerEqFib(n);

            // Print the found fibonacci number
            System.out.print(f + " ");

            // Reduce n
            n = n - f;
        }
    }
}
