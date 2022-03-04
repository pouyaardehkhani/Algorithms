public class IterativeHeap {
    private static void buildMaxHeap(Comparable[] arr, int n) {
        for (int i = 1; i < n; i++) {
            if (arr[i].compareTo(arr[(i - 1) / 2]) > 0) {
                int j = i;
                while (arr[j].compareTo(arr[(j - 1) / 2]) > 0) {
                    swap(arr, j, (j - 1) / 2);
                    j = (j - 1) / 2;
                }
            }
        }
    }

    public static void Sort(Comparable[] arr, int n) {
        buildMaxHeap(arr, n);
        for (int i = n - 1; i > 0; i--) {
            swap(arr, 0, i);
            int j = 0, index;
            do {
                index = (2 * j + 1);
                if (index < (i - 1) && arr[index].compareTo(arr[index + 1]) < 0)
                    index++;
                if (index < i && arr[j].compareTo(arr[index]) < 0)
                    swap(arr, j, index);
                j = index;
            } while (index < i);
        }
    }

    private static void swap(Comparable[] a, int i, int j) {
        Comparable temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
