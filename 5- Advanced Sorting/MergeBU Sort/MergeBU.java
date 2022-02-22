public class MergeBU {
    private static void merge(Comparable[] a, Comparable[] aux, int lo, int mid, int hi){
        int i = lo, j = mid+1;
        for (int k = lo; k <= hi; k++){
            if (i>mid)
                aux[k]=a[j++];
            else if (j>hi)
                aux[k]=a[i++];
            else if (a[j].compareTo(a[i])<0)
                aux[k]=a[j++];
            else
                aux[k]=a[i++];
        }
    }
    public static void Sort(Comparable[] a){
        int N = a.length;
        Comparable[] aux = new Comparable[N];
        for (int sz=1; sz<N; sz=sz+sz)
            for (int lo=0; lo<N-sz; lo+=sz+sz)
                merge(a,aux,lo,lo+sz-1,Math.min(lo+sz+sz-1, N-1));
    }
}
