import java.util.ArrayList;

public class Insertion {
    public static <T extends Comparable<T>> void Sort(ArrayList<T> iterable) {
        for (int i = 1; i < iterable.size(); i++) {
            T key = iterable.get(i);
            int j = i - 1;
            while (j >= 0 && iterable.get(j).compareTo(key) > 0) {
                iterable.set(j + 1, iterable.get(j));
                j = j - 1;
            }
            iterable.set(j + 1, key);
        }
    }
}
