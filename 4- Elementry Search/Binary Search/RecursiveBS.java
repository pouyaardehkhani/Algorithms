import java.util.ArrayList;

public class RecursiveBS {
    public static <T extends Comparable<T>> int Search(ArrayList<T> iterable, int Start_index, int last_index, T key){
        if (last_index >= Start_index) {
            int mid = Start_index + (last_index - Start_index) / 2;
            if (iterable.get(mid).equals(key))
                return mid;
            if (iterable.get(mid).compareTo(key) > 0)
                return RecursiveBS.Search(iterable, Start_index, mid - 1, key);
            return RecursiveBS.Search(iterable, mid + 1, last_index, key);
        }
        return -1;
    }
}
