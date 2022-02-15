import java.util.ArrayList;

public class Selection {
    public static <T extends Comparable<T>> void Sort(ArrayList<T> iterable) {
        for (int i = 0; i < iterable.size() - 1; i++) {
            int min = i;
            for (int j = i + 1; j < iterable.size(); j++) {
                if (iterable.get(j).compareTo(iterable.get(min)) < 0) {
                    min = j;
                }
            }
            T temp = iterable.get(min);
            iterable.set(min, iterable.get(i));
            iterable.set(i, temp);
        }
    }
}
