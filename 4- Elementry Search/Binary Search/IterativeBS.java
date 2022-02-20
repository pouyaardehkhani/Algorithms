import java.util.ArrayList;

public class IterativeBS {
    public static <T extends Comparable<T>> int Search(ArrayList<T> iterable, T key){
        int first_index = 0, last_index = iterable.size() - 1;
        while (first_index <= last_index) {
            int mid = first_index + (last_index - first_index) / 2;
            if (iterable.get(mid).equals(key))
                return mid;
            if (iterable.get(mid).compareTo(key) < 0)
                first_index = mid + 1;
            else
                last_index = mid - 1;
        }
        return -1;
    }
}
