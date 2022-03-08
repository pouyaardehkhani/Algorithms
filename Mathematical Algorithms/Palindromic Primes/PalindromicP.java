import java.util.Arrays;

public class PalindromicP {
    // A function that returns true only if num  contains one digit
    static boolean oneDigit(int num) {
        return (num >= 0 && num < 10);
    }

    // A recursive function to find out whether num is palindrome or not. Initially, dupNum
    // contains address of a copy of num.
    static boolean isPalUtil(int num, int dupNum) {
        if (oneDigit(num))
            return (num == (dupNum) % 10);
        if (!isPalUtil(num / 10, dupNum))
            return false;
        dupNum /= 10;
        return (num % 10 == (dupNum) % 10);
    }

    // The main function that uses recursive function isPalUtil() to find out whether num is palindrome
    // or not
    static boolean isPal(int num) {
        if (num < 0)
            num = -num;
        int dupNum = num;

        return isPalUtil(num, dupNum);
    }

    // Function to generate all primes and checking whether number is palindromic or not
    static void printPalPrimesLessThanN(int n) {
        boolean prime[] = new boolean[n + 1];
        Arrays.fill(prime, true);
        for (int p = 2; p * p <= n; p++) {
            if (prime[p]) {
                for (int i = p * 2; i <= n; i += p) {
                    prime[i] = false;
                }
            }
        }
        for (int p = 2; p <= n; p++) {
            if (prime[p] && isPal(p)) {
                System.out.print(p + " ");
            }
        }
    }
}
