public class ModularMultiplicative {
    static int NaiveModInverse(int a, int m) {
        for (int x = 1; x < m; x++)
            if (((a % m) * (x % m)) % m == 1)
                return x;
        return 1;
    }

    static int EAModInverse(int a, int m) {
        int m0 = m;
        int y = 0, x = 1;
        if (m == 1)
            return 0;
        while (a > 1) {
            int q = a / m;
            int t = m;
            m = a % m;
            a = t;
            t = y;
            y = x - q * y;
            x = t;
        }
        if (x < 0)
            x += m0;
        return x;
    }

    static void PrimeModInverse(int a, int m) {
        int g = gcd(a, m);
        if (g != 1)
            System.out.println("Inverse doesn't exist");
        else {
            System.out.println(
                    "Modular multiplicative inverse is "
                            + power(a, m - 2, m));
        }
    }

    private static int power(int x, int y, int m) {
        if (y == 0)
            return 1;
        int p = power(x, y / 2, m) % m;
        p = (int) ((p * (long) p) % m);
        if (y % 2 == 0)
            return p;
        else
            return (int) ((x * (long) p) % m);
    }

    private static int gcd(int a, int b) {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }
}
