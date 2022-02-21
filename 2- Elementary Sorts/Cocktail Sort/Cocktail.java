import java.util.ArrayList;

public class Cocktail {
    public static <T extends Comparable<T>> void Sort(ArrayList<T> a) {
        boolean swapped = true;
        int start = 0;
        int end = a.size();
        while (swapped == true) {
            swapped = false;
            for (int i = start; i < end - 1; ++i) {
                if (a.get(i).compareTo(a.get(i+1)) > 0) {
                    T temp = a.get(i);
                    a.set(i,a.get(i+1));
                    a.set(i+1,temp);
                    swapped = true;
                }
            }
            if (swapped == false)
                break;
            swapped = false;
            end = end - 1;
            for (int i = end - 1; i >= start; i--) {
                if (a.get(i).compareTo(a.get(i+1)) > 0) {
                    T temp = a.get(i);
                    a.set(i,a.get(i+1));
                    a.set(i+1,temp);
                    swapped = true;
                }
            }
            start = start + 1;
        }
    }
}
