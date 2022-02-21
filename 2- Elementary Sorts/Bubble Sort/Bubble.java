import java.util.ArrayList;

public class Bubble {
    public static <T extends Comparable<T>> void Sort(ArrayList<T> it) {
        int i, j;
        T temp;
        boolean swapped;
        for (i = 0; i < it.size() - 1; i++) {
            swapped = false;
            for (j = 0; j < it.size() - i - 1; j++) {
                if (it.get(j).compareTo(it.get(j + 1)) > 0) {
                    temp = it.get(j);
                    it.set(j, it.get(j+1));
                    it.set(j+1, temp);
                    swapped = true;
                }
            }
            if (swapped == false)
                break;
        }
    }
}
