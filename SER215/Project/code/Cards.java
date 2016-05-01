import java.util.*;
import java.util.concurrent.ThreadLocalRandom;

public class Cards {
	
	
	public List<Integer> cards = new ArrayList<Integer>();
	public static final int NUMBER_OF_CARDS = 52;
	
	public Cards() {
		
		for(int i=0; i < 52; i ++) {
			cards.add(i % 13 + 1);
		}
	}
	
//	public  static void main(String[]  arg) {
//		
//		Cards cards = new Cards();
//		shuffleArray(cards.cards);
//		for(int i = 0; i < 52; i ++) {
//			System.out.print(cards.cards.get(i) + " ");
//		}
//	}
	
	static void shuffleArray(List<Integer> ar)
	{
	   // if running on Java 6 or older, use `new Random()` on RHS here
	   Random rnd = ThreadLocalRandom.current();
	   for (int i = ar.size() - 1; i > 0; i--)
	   {
		  int index = rnd.nextInt(i + 1);
	      // Simple swap
	      int a = ar.get(index);
	      ar.set(index, ar.get(i));
	      ar.set(i, a);
	    }
	 }
}
