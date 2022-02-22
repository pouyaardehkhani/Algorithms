public class Merge {
    public static void Sort(Comparable[] a){
        Comparable[] aux = new Comparable[a.length];
        Sort(a,aux,0,a.length-1);
    }
    private static void Sort(Comparable[] a, Comparable[] aux, int lo, int hi){
        if (hi<=lo) return;
        int mid = lo + (hi - lo) / 2;
        Sort(aux, a, lo, mid);
        Sort(aux, a, mid+1, hi);
        merge(a, aux, lo, mid, hi);
    }
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
}
