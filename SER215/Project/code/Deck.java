import java.util.*;
import java.util.concurrent.ThreadLocalRandom;

public class Deck {
	
	
	public List<Integer> cards = new ArrayList<Integer>();
	public static final int NUMBER_OF_CARDS = 52;
	
	/**
	 * constructor 
	 ***********************************/
	public Deck() {
		
		for(int i=0; i < NUMBER_OF_CARDS; i ++) {
			cards.add(i % 13 + 1);
		}
		
		shuffleArray(cards);
	}
	
	/**
	 * public boolean checkNoMoreCards() {
	 * ---------------------------------------------------------
	 * This function checks if the deck is empty.
	 ***********************************************************/
	public boolean checkNoMoreCards() {
		
		boolean noMoreCards = false;
		if(cards.size() == 0) {
			noMoreCards = true;
		}
		
		return noMoreCards;
	}
	
	/**
	 * static void shuffleArray(List<Integer> ar)
	 * ---------------------------------------------------------
	 * This function shuffle elements of ArrayList
	 * @param the array list that you want to shuffle 
	 ***********************************************************/
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
	
	/**
	 * public void printoutDeck() { 
	 * ---------------------------------------------------------
	 * This function prints out all deck cards.
	 * It may be used to debug the program.
	 ***********************************************************/
	public void printoutDeck() {
		for(int i = 0; i < cards.size(); i ++) {
			System.out.print(cards.get(i) + " ");
		}
	}
	
	/**
	 * public void printoutNumberOfCards() { 
	 * ---------------------------------------------------------
	 * This function prints out the number of cards left.
	 * It may be used to debug the program.
	 ***********************************************************/
	public void printoutNumberOfCards() {
		System.out.println("\ndeck.cards.size() "+ cards.size() );
	}
	
}

