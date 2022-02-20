import java.util.ArrayList;

public class LS {
    public static <T extends Comparable<T>> int Search(ArrayList<T> iterable, T key){
        for(int i=0;i< iterable.size();i++){
            if (iterable.get(i).equals(key)){
                return i;
            }
        }
        return -1;
    }
}
