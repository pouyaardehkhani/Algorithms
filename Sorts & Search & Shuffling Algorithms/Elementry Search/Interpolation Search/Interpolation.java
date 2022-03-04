import java.util.ArrayList;

public class Interpolation {
    public static int Search(ArrayList<Integer> iterable,int low,int high, int key){
        int position;
        if (low <= high && iterable.get(low).compareTo(key)<=0 && iterable.get(high).compareTo(key)>=0) {
            position = low
                    + (((high - low) / (iterable.get(high) - iterable.get(low)))
                    * (key - iterable.get(low)));
            if (iterable.get(position).equals(key))
                return position;
            if (iterable.get(position).compareTo(key) < 0)
                return Interpolation.Search(iterable, position + 1, high, key);
            if (iterable.get(position).compareTo(key) > 0)
                return Interpolation.Search(iterable, low, position - 1, key);
        }
        return -1;
    }
}
