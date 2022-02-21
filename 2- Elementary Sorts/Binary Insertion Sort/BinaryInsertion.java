import java.util.ArrayList;

public class BinaryInsertion {
    private static <T extends Comparable<T>> int RecursiveBS(ArrayList<T> iterable, int low, int high, T key) {
        if (high >= low) {
            int mid = low + (high - low) / 2;
            if (iterable.get(mid).equals(key))
                return mid;
            if (iterable.get(mid).compareTo(key) > 0)
                return RecursiveBS.Search(iterable, low, mid - 1, key);
            return RecursiveBS.Search(iterable, mid + 1, high, key);
        }
        return -1;
    }

    private static <T extends Comparable<T>> int IterativeBS(ArrayList<T> iterable, int low, int high, T key) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (iterable.get(mid).equals(key))
                return mid;
            if (iterable.get(mid).compareTo(key) < 0)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    public static <T extends Comparable<T>> void Sort(ArrayList<T> a) {
        int i, loc, j;
        T selected;
        for (i = 1; i < a.size(); ++i) {
            j = i - 1;
            selected = a.get(i);
            loc = BinaryInsertion.IterativeBS(a, 0, j, selected); //or BinaryInsertion.RecursiveBS
            while (j >= loc) {
                a.set(j+1,a.get(j));
                j--;
            }
            a.set(j+1,selected);
        }
    }
}
