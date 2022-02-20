import java.util.ArrayList;

public class ImprovedLS {
    public static <T extends Comparable<T>> int Search(ArrayList<T> iterable, T key) {
        int left = 0;
        int length = iterable.size();
        int right = length - 1;
        int position = -1;

        for (left = 0; left <= right; ) {
            if (iterable.get(left).equals(key)) {
                position = left;
                return position;
            }
            if (iterable.get(right).equals(key)) {
                position = right;
                return position;
            }
            left++;
            right--;
        }
        return -1;
    }
}
