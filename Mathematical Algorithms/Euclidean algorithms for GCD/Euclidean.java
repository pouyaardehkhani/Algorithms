public class Euclidean {

    public static int BasicGCD(int a, int b) {
        if (a == 0)
            return b;
        return BasicGCD(b%a, a);
    }

    public static int ExtendedGCD(int a, int b, int x, int y) {
        if (a == 0) {
            x = 0;
            y = 1;
            return b;
        }
        int x1=1, y1=1;
        int gcd = ExtendedGCD(b%a, a, x1, y1);
        x = y1 - (b/a) * x1;
        y = x1;
        return gcd;
    }
}
