import java.util.ArrayList;

public class Stooge {
    public static <T extends Comparable<T>> void Sort(ArrayList<T> it,int low, int high) {
        if (low >= high)
            return;
        if (it.get(low).compareTo(it.get(high)) > 0) {
            T temp = it.get(low);
            it.set(low, it.get(high));
            it.set(high, temp);
        }
        if (high - low + 1 > 2) {
            int t = (high - low + 1) / 3;
            Stooge.Sort(it, low, high - t);
            Stooge.Sort(it, low + t, high);
            Stooge.Sort(it, low, high - t);
        }
    }
}
