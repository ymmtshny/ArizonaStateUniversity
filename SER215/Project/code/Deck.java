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
	
	
	/**
	 * MAIN
	 ***********************************/
	public  static void main(String[]  arg) {
		
		//initialize 
		int userInput = 0;
		int computerInput = 0;
		int userPoint = 0;
		int computerPoint = 0;
		boolean hasCard  = false;
		Deck deck = new Deck();
		User user = new User();
		Computer computer = new Computer();
		
		//draw initial cards
		user.getInitialCards(deck);
		computer.getInitialCards(deck);
		
		//checks 
		user.checkIfHasGroupYesRemoveAndAddPoint();
		computer.checkIfHasGroupYesRemoveAndAddPoint();
		
		do{
			//user's turn
			userInput = user.getUsersInput();
			hasCard = user.askForCard(computer, userInput);
			if(hasCard) {
				user.takeAndRemoveCardsFromPlayer(computer, userInput);
			} else {
				user.drawCard(deck);
			}
			
			user.checkIfHasGroupYesRemoveAndAddPoint();
			
			//need to check no more card
			if(!deck.checkNoMoreCards()) {
				
				//computer's turn
				computerInput = computer.getComputersInput(); 
				hasCard = computer.askForCard(user, computerInput);
				if(hasCard) {
					computer.takeAndRemoveCardsFromPlayer(user, computerInput);
				} else {
					computer.drawCard(deck);
				}
				
				computer.checkIfHasGroupYesRemoveAndAddPoint();
				
			}
			
		}while(!deck.checkNoMoreCards());
		
		userPoint = user.getPoint();
		computerPoint = computer.getPoint();
		System.out.println();
		System.out.println("User's points     " + userPoint);
		System.out.println("Computer's points " + computerPoint);
		if(userPoint > computerPoint) {
			System.out.println("YOU WIN!!");
		} else if(userPoint < computerPoint) {
			System.out.println("YOU LOSE!!");
		} else {
			System.out.println("DRAW");
		}
		
		
		//computer.printoutCards();
		
		//user.getUsersInput();
		
		
//		Deck deck = new Deck();
		//deck.printoutDeck();
		//deck.printoutNumberOfCards();
		
//		Player player1 = new Player();
//		player1.getInitialCards(deck);
		//deck.printoutNumberOfCards();
		
//		for(int i = deck.cards.size(); i > 0 ; i --){
//			player1.drawCard(deck);
//		}
		
		//deck.printoutNumberOfCards();
		
//		player1.printoutCards();
//		player1.printoutNumberOfCards();
		
		
//		for(int i = 1; i <= 13; i ++) {
//			player1.removeGroupFromHands(i);
//		}
		
//		player1.printoutNumberOfCards();
		
//		for(int i = 1; i <= 13; i ++) {
//			if(player1.checkGroup(i)) {
//				player1.addPoint();
//				player1.removeGroupFromHands(i);
//			}
//		}
//		
//		System.out.println("score "+player1.getPoint());
//		player1.printoutCards();
//		
//		
//		
////		System.out.println();
//		Player player2 = new Player();
//		player2.getInitialCards(deck);
//		player2.printoutCards();
//		
//		Scanner sc = new Scanner(System.in);
//		int i = sc.nextInt();
//		
//		player1.takeAndRemoveCardsFromPlayer(player2, i);
//		
//		player1.printoutCards();
//		player2.printoutCards();
		
	}
	
}

