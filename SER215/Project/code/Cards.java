import java.util.*;
import java.util.concurrent.ThreadLocalRandom;

public class Cards {
	public int[] cards = new int[52];
	public static int numberOfCards = 52;
	
	public Cards() {
		
		for(int i=0; i < 52; i ++) {
			cards[i] = i % 13 + 1;
		}
	}
	
	public  static void main(String[]  arg) {
		
		Cards cards = new Cards();
		shuffleArray(cards.cards);
		for(int i = 0; i < 52; i ++) {
			System.out.print(cards.cards[i] + " ");
		}
	}
	
	static void shuffleArray(int[] ar)
	{
	   // If running on Java 6 or older, use `new Random()` on RHS here
	   Random rnd = ThreadLocalRandom.current();
	   for (int i = ar.length - 1; i > 0; i--)
	   {
		  int index = rnd.nextInt(i + 1);
	      // Simple swap
	      int a = ar[index];
	      ar[index] = ar[i];
	      ar[i] = a;
	    }
	 }
}
