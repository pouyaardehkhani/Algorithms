import java.util.TreeSet;

public class Aliquot {
    // Function to calculate sum of all proper divisors
    static int getSum(int n) {
        int sum = 0; // 1 is a proper divisor
        // Note that this loop runs till square root of n
        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                // If divisors are equal, take only one of them
                if (n / i == i) {
                    sum = sum + i;
                } else // Otherwise take both
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
    static void printAliquot(int n) {
        // Print the first term
        System.out.printf("%d ", n);
        TreeSet<Integer> s = new TreeSet<>();
        s.add(n);
        int next = 0;
        while (n > 0) {
            // Calculate next term from previous term
            n = getSum(n);
            if (s.contains(n) && n != s.last()) {
                System.out.print("\nRepeats with " + n);
                break;
            }
            // Print next term
            System.out.print(n + " ");
            s.add(n);
        }
    }
}
