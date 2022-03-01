public class Hosoya {
    static int hosoya(int n, int m) {
        // Base case
        if ((n == 0 && m == 0) ||
                (n == 1 && m == 0) ||
                (n == 1 && m == 1) ||
                (n == 2 && m == 1))
            return 1;

        // Recursive step
        if (n > m)
            return hosoya(n - 1, m) + hosoya(n - 2, m);

        else if (m == n)
            return hosoya(n - 1, m - 1) + hosoya(n - 2, m - 2);

        else
            return 0;
    }

    static void printHosoya(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++)
                System.out.print(hosoya(i, j) + " ");

            System.out.println("");
        }
    }
}
