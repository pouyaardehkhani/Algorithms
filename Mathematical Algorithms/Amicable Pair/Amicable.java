public class Amicable {
    static int divSum(int n) {

        int result = 0;

        for (int i = 2; i <= Math.sqrt(n); i++) {
            // if 'i' is divisor of 'n'
            if (n % i == 0) {
                // if both divisors are same
                // then add it once else add
                // both
                if (i == (n / i))
                    result += i;
                else
                    result += (i + n / i);
            }
        }

        // Add 1 and n to result as above loop
        // considers proper divisors greater
        // than 1.
        return (result + 1);
    }

    static boolean areAmicable(int x, int y) {
        if (divSum(x) != y)
            return false;

        return (divSum(y) == x);
    }
}
