import java.util.ArrayList;

public class IterativeTernary {
    public static <T extends Comparable<T>> int Search(ArrayList<T> iterable, int first_index, int last_index, T key){
        while (last_index >= first_index) {
            int mid1 = first_index + (last_index - first_index) / 3;
            int mid2 = last_index - (last_index - first_index) / 3;
            if (iterable.get(mid1).equals(key)) {
                return mid1;
            }
            if (iterable.get(mid2).equals(key)) {
                return mid2;
            }
            if (iterable.get(mid1).compareTo(key)>0) {
                last_index = mid1 - 1;
            }
            else if (iterable.get(mid2).compareTo(key)<0) {
                first_index = mid2 + 1;
            }
            else {
                first_index = mid1 + 1;
                last_index = mid2 - 1;
            }
        }
        return -1;
    }
}
