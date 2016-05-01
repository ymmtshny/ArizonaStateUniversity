import java.util.*;
import java.util.concurrent.ThreadLocalRandom;

public class Deck {
	
	
	public List<Integer> cards = new ArrayList<Integer>();
	public static final int NUMBER_OF_CARDS = 52;
	
	public Deck() {
		
		for(int i=0; i < NUMBER_OF_CARDS; i ++) {
			cards.add(i % 13 + 1);
		}
		
		shuffleArray(cards);
	}
	
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
	
	public void printoutDeck() {
		for(int i = 0; i < cards.size(); i ++) {
			System.out.print(cards.get(i) + " ");
		}
	}
	
	public void printoutNumberOfCards() {
		System.out.println("\ndeck.cards.size() "+ cards.size() );
	}
	
	
	
	public  static void main(String[]  arg) {
		
		Deck deck = new Deck();
		//deck.printoutDeck();
		//deck.printoutNumberOfCards();
		
		Player player1 = new Player();
		//player1.getInitialCards(deck);
		//deck.printoutNumberOfCards();
		
		for(int i = deck.cards.size(); i > 0 ; i --){
			player1.drawCard(deck);
		}
		
		//deck.printoutNumberOfCards();
		
		player1.printoutCards();
		player1.printoutNumberOfCards();
		
		
		for(int i = 1; i <= 13; i ++) {
			player1.removeGroupFromHands(i);
		}
		
		player1.printoutNumberOfCards();
		
//		for(int i = 1; i <= 13; i ++) {
//			if(player1.checkGroup(i)) {
//				player1.addPoint();
//				player1.removeGroupFromHands(i);
//			}
//		}
//		
//		System.out.println("score "+player1.getPoint());
		player1.printoutCards();
		
		
		
//		System.out.println();
//		Player player2 = new Player();
//		player2.getInitialCards(deck);
//		player2.printoutCards();
		
		
		
	}
	
}

