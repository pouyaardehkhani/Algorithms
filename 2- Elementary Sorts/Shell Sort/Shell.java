import java.util.ArrayList;

public class Shell {
    public static <T extends Comparable<T>> void Sort(ArrayList<T> iterable) {
        for (int h = iterable.size()/2; h > 0; h /= 2)
        {
            for (int i = h; i < iterable.size(); i += 1)
            {
                T temp = iterable.get(i);
                int j;
                for (j = i; j >= h && iterable.get(j - h).compareTo(temp)>0; j -= h)
                    iterable.set(j, iterable.get(j - h));
                iterable.set(j, temp);
            }
        }
    }
}
