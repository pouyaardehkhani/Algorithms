import java.util.ArrayList;

public class QuickFind_UF {
    private ArrayList<Integer> id;

    public QuickFind_UF(int size){
        id = new ArrayList<Integer>(size);
        for(int i=0;i<size;i++)
            id.add(i);
    }

    public boolean connected(int p, int q){
        return id.get(p).equals(id.get(q));
    }

    public void union(int p, int q){
        int pid= id.get(p);
        int qid= id.get(q);
        for(int i=0; i< id.size(); i++){
            if (id.get(i).equals(pid)) id.set(i,qid);
        }
    }

    public int count(){
        return id.size();
    }
}
