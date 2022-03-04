import java.util.ArrayList;
import java.util.*;
import java.util.Collections;

public class Bucket {
    public static void Sort(ArrayList<Float> it, int n) { //without integer part
        if (n <= 0)
            return;
        @SuppressWarnings("unchecked")
        Vector<Float>[] buckets = new Vector[n];
        for (int i = 0; i < n; i++) {
            buckets[i] = new Vector<Float>();
        }
        for (int i = 0; i < n; i++) {
            float idx = it.get(i) * n;
            buckets[(int) idx].add(it.get(i));
        }
        for (int i = 0; i < n; i++) {
            Collections.sort(buckets[i]);
        }
        int index = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < buckets[i].size(); j++) {
                it.set(index, buckets[i].get(j));
                index++;
            }
        }
    }
}
