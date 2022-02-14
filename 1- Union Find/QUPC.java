import java.util.ArrayList;

public class QUPC {
    private ArrayList<Integer> id;

    public QUPC(int size){
        id = new ArrayList<Integer>(size);
        for(int i=0;i<size;i++){
            id.add(i);
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
        id.set(i, j);
    }

    public int count(){
        return id.size();
    }
}
