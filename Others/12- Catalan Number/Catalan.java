public class Catalan {
    static void catalan(int n) {
        int cat_ = 1;

        // For the first number
        System.out.print(cat_ + " "); // C(0)

        // Iterate till N
        for (int i = 1; i < n; i++) {
            // Calculate the number
            // and print it
            cat_ *= (4 * i - 2);
            cat_ /= (i + 1);
            System.out.print(cat_ + " ");
        }
    }
}
