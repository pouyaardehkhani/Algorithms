import java.util.ArrayList;

public class Exponential{
    public static <T extends Comparable<T>> int Search(ArrayList<T> iterable,int n, T key){
        if (iterable.get(0).equals(key))
            return 0;
        int i = 1;
        while (i < n && iterable.get(i).compareTo(key) <= 0)
            i = i*2;
        return BS.Search(iterable, i/2, Math.min(i, n-1), key);
    }
}

class BS {
    public static <T extends Comparable<T>> int Search(ArrayList<T> iterable,int first_index, int last_index, T key){
        while (first_index <= last_index){
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
