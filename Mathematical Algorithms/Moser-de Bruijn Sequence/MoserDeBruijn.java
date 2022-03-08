public class MoserDeBruijn {
    // Function to generate nth term of Moser-de Bruijn Sequence
    static int gen(int n) {
        int[] S = new int[n + 1];
        S[0] = 0;
        if (n != 0)
            S[1] = 1;
        for (int i = 2; i <= n; i++) {
            // S(2 * n) = 4 * S(n)
            if (i % 2 == 0)
                S[i] = 4 * S[i / 2];
                // S(2 * n + 1) = 4 * S(n) + 1
            else
                S[i] = 4 * S[i / 2] + 1;
        }
        return S[n];
    }

    // Generating the first 'n' terms of Moser-de Bruijn Sequence
    static void moserDeBruijn(int n) {
        for (int i = 0; i < n; i++)
            System.out.print(gen(i) + " ");
    }
}
