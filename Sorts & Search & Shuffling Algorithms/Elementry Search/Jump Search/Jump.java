import java.util.ArrayList;

public class Jump {
    public static <T extends Comparable<T>> int Search(ArrayList<T> iterable, T key){
        int size=iterable.size();
        int step = (int)Math.floor(Math.sqrt(size));
        int prev = 0;
        while (iterable.get(Math.min(step, size)-1).compareTo(key) < 0)
        {
            prev = step;
            step += (int)Math.floor(Math.sqrt(size));
            if (prev >= size)
                return -1;
        }
        while (iterable.get(prev).compareTo(key) < 0)
        {
            prev++;
            if (prev == Math.min(step, size))
                return -1;
        }
        if (iterable.get(prev).equals(key))
            return prev;
        return -1;
    }
}
