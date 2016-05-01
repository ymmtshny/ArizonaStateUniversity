import java.util.*;
import java.util.concurrent.ThreadLocalRandom;


public class Player {
	
	public List<Integer> cards = new ArrayList<Integer>();
	public int point = 0; 
	
	/**
	 * constructor 
	 ***********************************/
	public Player() {
		//Intentionally empty here
	}
	
	/**
	 * public void checkIfHasGroupYesRemoveAndAddPoint() {
	 * ---------------------------------------------------------
	 * This function checks if the player has 4 same cards. If
	 * the player has 4 same cards, this function calls
	 * removeGroupFromHands() and getPoint() function.
	 * @param the number that you want to check 
	 ***********************************************************/
	public void checkIfHasGroupYesRemoveAndAddPoint() {

		boolean hasGroup = false;
		
		for(int i = 1; i <= 13; i ++  ){
			hasGroup = checkGroup(i);
			if(hasGroup) {
				removeGroupFromHands(i);
				addPoint();
			} 
		}
	}
	
	/**
	 * public boolean checkGroup(int number)
	 * ---------------------------------------------------------
	 * This function checks if the player has 4 same cards. If
	 * the player has 4 same cards, this function returns true.
	 * If not, it returns false.  
	 * @param the number that you want to check 
	 ***********************************************************/
	public boolean checkGroup(int number) {
		boolean has4Numbers = false;
		int count = 0;
		for(int i = 0; i < cards.size(); i ++) {
			if(cards.get(i) == number) {
				count ++;
			}
		}
		
		if(count > 3) {
			has4Numbers = true;
		}
		
		return has4Numbers;
	}
	
	/**
	 * public void removeGroupFromHands(int number)
	 * ---------------------------------------------------------
	 * This function removes number from player's cards List.
	 * @param the number that you want to remove 
	 ***********************************************************/
	public void removeGroupFromHands(int number) {
		
		int currentSize = cards.size();
		int idx = 0;
        do {
        	
            if(cards.get(idx) == number) {
            	cards.remove(idx);
            	currentSize = cards.size();
            	idx --;
            }
            idx ++;
            
        }while (idx < currentSize);
		
	}
	
	/**
	 * public int getPoint() 
	 * ---------------------------------------------------------
	 * This is a getter method and just retuns point of the player
	 ***********************************************************/
	public int getPoint() {
		return point;
	}
	
	/**
	 * public void addPoint()  
	 * ---------------------------------------------------------
	 * This function adds 1 point to the current point.
	 ***********************************************************/
	public void addPoint() {
		point = point + 1;
	}
	
	/**
	 * public void addPoints(int number)  
	 * ---------------------------------------------------------
	 * This function adds some points to the current point.
	 * @param points that you want ot add.
	 ***********************************************************/
	public void addPoints(int number) {
		point = point + number;
	}
	
	/**
	 * public boolean askForCard(Player player, int number)  
	 * ---------------------------------------------------------
	 * This function checks if a player has some number and 
	 * returns true or false.
	 * @param player that you want to check
	 * @param number that you want to check
	 ***********************************************************/
	public boolean askForCard(Player player, int number) {
		//check if the other has 'number' card.
		boolean hasCard = false;
		
		for(int i= 0; i < player.cards.size(); i++)  {
			if(player.cards.get(i) == number) {
				hasCard = true;
			}
		}

		return hasCard;	
	}
	
	/**
	 * public void drawCard(Deck deck)   
	 * ---------------------------------------------------------
	 * This function gets one random card number from deck
	 * @param deck
	 ***********************************************************/
	public void drawCard(Deck deck) {

		if(deck.cards.size() > 0) {
			int min = 0;
			int max = deck.cards.size();
			int randomIdx = ThreadLocalRandom.current().nextInt(min, max);
			int randomCard = deck.cards.get(randomIdx);
			deck.cards.remove(randomIdx);
			cards.add(randomCard);
		}
//		} else {
//			System.out.print("Game Over");
//			System.exit(0);
//		}
	}
	
	/**
	 * public void takeAndRemoveCardsFromPlayer(Player AnotherPlayer, int number)  
	 * ---------------------------------------------------------
	 * This function removes some cards from the user and adds
	 * them to the players cards. 
	 * @param the player who you want to remove cards from.
	 * @param the card that you want to get
	 ***********************************************************/
	public void takeAndRemoveCardsFromPlayer(Player AnotherPlayer, int number) {
		//if the player has the number, delete the number from cards array
		
		int idx = 0;
		int currentSize = AnotherPlayer.cards.size();
		
		if(AnotherPlayer.cards.size() != 0) {
			
			do{
				if(AnotherPlayer.cards.get(idx) == number) {
					AnotherPlayer.cards.remove(idx);
					cards.add(number);
					currentSize--;
					idx --;
				}
			
				idx ++;
			}while(idx < currentSize);
		
		}
		
	}
	
	/**
	 * public void getInitialCards(Deck cards)   
	 * ---------------------------------------------------------
	 * This function let the player have initial cards
	 * @param Deck
	 ***********************************************************/
	public void getInitialCards(Deck cards) {
		
		for(int i = 0; i < 8; i ++) {
			drawCard(cards);
		}
		
	}
	
	/**
	 * public void printoutCards()    
	 * ---------------------------------------------------------
	 * This function prints out all cards that the player has.
	 * This function may be used to debug.
	 ***********************************************************/
	public void printoutCards() {
		System.out.println("Cards");
		for(int i :cards) {
			System.out.print(i+ " ");
		}
		System.out.println();
	}
	
	/**
	 * public void printoutNumberOfCards()     
	 * ---------------------------------------------------------
	 * This function prints out the number of cards that
	 * the player has. This function may be used to debug.
	 ***********************************************************/
	public void printoutNumberOfCards() {
		System.out.println("\ncards.size() "+ cards.size() );
	}
}
