public class Juggler {
    static void printJuggler(int n) {
        int a = n;
        // print the first term
        System.out.print(a + " ");
        // calculate terms until last term is not 1
        while (a != 1) {
            int b = 0;
            // Check if previous term is even or odd
            if (a % 2 == 0)
                // calculate next term
                b = (int) Math.floor(Math.sqrt(a));
            else
                // for odd previous term calculate next term
                b = (int) Math.floor(Math.sqrt(a) *  Math.sqrt(a) * Math.sqrt(a));
            System.out.print(b + " ");
            a = b;
        }
    }
}
