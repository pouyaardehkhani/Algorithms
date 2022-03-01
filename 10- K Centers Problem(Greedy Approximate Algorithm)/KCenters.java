import java.util.ArrayList;

public class KCenters {
    static int maxindex(int[] dist, int n) {
        int mi = 0;
        for (int i = 0; i < n; i++) {
            if (dist[i] > dist[mi])
                mi = i;
        }
        return mi;
    }

    static void selectKcities(int n, int weights[][], int k) {
        int[] dist = new int[n];
        ArrayList<Integer> centers = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            dist[i] = Integer.MAX_VALUE;
        }
        int max = 0;
        for (int i = 0; i < k; i++) {
            centers.add(max);
            for (int j = 0; j < n; j++) {
                dist[j] = Math.min(dist[j],
                        weights[max][j]);
            }
            max = maxindex(dist, n);
        }
        System.out.println(dist[max]);
        for (int i = 0; i < centers.size(); i++) {
            System.out.print(centers.get(i) + " ");
        }
        System.out.print("\n");
    }
}
