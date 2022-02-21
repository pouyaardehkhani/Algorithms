import java.util.ArrayList;

public class Comb {
    private static int getNextGap(int gap) {
        gap = (gap*10)/13;
        if (gap < 1)
            return 1;
        return gap;
    }
    public static <T extends Comparable<T>> void Sort(ArrayList<T> it) {
        int n = it.size();
        int gap = n;
        boolean swapped = true;
        while (gap != 1 || swapped == true) {
            gap = getNextGap(gap);
            swapped = false;
            for (int i=0; i<n-gap; i++) {
                if (it.get(i).compareTo(it.get(i+gap)) > 0) {
                    T temp = it.get(i);
                    it.set(i, it.get(i+gap));
                    it.set(i+gap, temp);
                    swapped = true;
                }
            }
        }
    }
}
