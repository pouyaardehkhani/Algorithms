import java.util.ArrayList;

public class WQUPC {
    private ArrayList<Integer> id;
    private ArrayList<Integer> sz;

    public WQUPC(int size){
        id = new ArrayList<Integer>(size);
        sz = new ArrayList<Integer>(size);
        for(int i=0;i<size;i++){
            id.add(i);
            sz.add(1);
        }
    }

    private int root(int i){
        while (!id.get(i).equals(i)){
            id.set(i, id.get(id.get(i)));
            i=id.get(i);
        }
        return i;
    }

    public boolean connected(int p, int q){
        return root(p) == root(q);
    }

    public void union(int p, int q){
        int i = root(p);
        int j = root(q);
        if (i == j) return;
        if (sz.get(i) < sz.get(j)){
            id.set(i, j);
            sz.set(j, sz.get(j)+sz.get(i));
        }
        else {
            id.set(j, i);
            sz.set(j, sz.get(i)+sz.get(j));
        }
    }

    public int count(){
        return id.size();
    }
}
