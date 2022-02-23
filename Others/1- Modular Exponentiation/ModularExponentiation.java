public class ModularExponentiation {
    /* Iterative Function to calculate (x^y) in O(log y) */
    static int exponentModI(int x, int y, int p) {
        int res = 1;
        x = x % p;
        if (x == 0)
            return 0;
        while (y > 0) {
            if ((y & 1) != 0)
                res = (res * x) % p;
            y = y >> 1; // y = y/2
            x = (x * x) % p;
        }
        return res;
    }

    static int exponentModR(int A, int B, int C) {
        if (A == 0)
            return 0;
        if (B == 0)
            return 1;
        long y;
        if (B % 2 == 0) {
            y = exponentModR(A, B / 2, C);
            y = (y * y) % C;
        }
        else {
            y = A % C;
            y = (y * exponentModR(A, B - 1,
                    C) % C) % C;
        }
        return (int) ((y + C) % C);
    }
}
