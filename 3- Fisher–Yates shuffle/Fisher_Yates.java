import java.util.ArrayList;
import java.util.Random;

public class Fisher_Yates {
    public static <T extends Comparable<T>> void Shuffle(ArrayList<T> iterable) {
        Random R=new Random();
        for (int i=iterable.size()-1; i>0; i--){
            int random = R.nextInt(i+1);

            T temp= iterable.get(i);
            iterable.set(i, iterable.get(random));
            iterable.set(random,temp);
        }
    }
}
