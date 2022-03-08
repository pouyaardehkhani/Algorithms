public class Padovan {
    static int pad(int n) {
        int[] padv = new int[n]; //create array to store padovan values
        padv[0] = padv[1] = padv[2] = 1;
        for (int i = 3; i <= n; i++) {
            padv[i] = padv[i - 2] + padv[i - 3];
        }
        return padv[n - 1];
    }
}
