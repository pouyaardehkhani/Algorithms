public class Quick3W {
    private static void partition(int a[], int l, int r) {
        int i = l - 1;
        int j = r;
        int p = l - 1, q = r;
        int v = a[r];
        while (true) {
            while (a[++i] < v)
                ;
            while (v < a[--j])
                if (j == l)
                    break;
            if (i >= j)
                break;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            if (a[i] == v) {
                p++;
                temp = a[i];
                a[i] = a[p];
                a[p] = temp;
            }
            if (a[j] == v) {
                q--;
                temp = a[q];
                a[q] = a[j];
                a[j] = temp;
            }
        }
        int temp = a[i];
        a[i] = a[r];
        a[r] = temp;
        j = i - 1;
        for (int k = l; k < p; k++, j--) {
            temp = a[k];
            a[k] = a[j];
            a[j] = temp;
        }
        i = i + 1;
        for (int k = r - 1; k > q; k--, i++) {
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }
    }

    public static void sort(int a[], int l, int r) {
        if (r <= l)
            return;
        int i = 0;
        int j = 0;
        partition(a, l, r);
        sort(a, l, j);
        sort(a, i, r);
    }
}
