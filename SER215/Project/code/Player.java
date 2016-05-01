import java.util.*;
import java.util.concurrent.ThreadLocalRandom;


public class Player {
	
	public List<Integer> cards = new ArrayList<Integer>();
	public int point = 0; //the number of groups
	
	//constructor
	public Player() {
		
	}
	
	public boolean checkGroup(int number) {
		boolean has4Numbers = false;
		int count = 0;
		for(int i:cards) {
			if(cards.get(i) == number) {
				count ++;
			}
		}
		
		if(count > 3) {
			has4Numbers = true;
		}
		
		return has4Numbers;
	}
	
	public void removeGroupFromHands(int number) {
		
		int initalSize = cards.size();
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
		
//		for(int i = 0; i < card.size(); i++) {
//			//if(cards.get(i) == number) {
//				cards.remove(i);
//			//}
//		}
	}
	
	public int getPoint() {
		return point;
	}
	
	public void addPoint() {
		point = point + 1;
	}
	
	//上書きする。
	public boolean askForCard(Player player, int number) {
		//check if the other has 'number' card.
		boolean hasCard = false;
		
		for(int i:player.cards)  {
			if(player.cards.get(i) == number) {
				hasCard = true;
			}
		}

		return hasCard;
		
	}
	
	public void drawCard(Deck deck) {

		if(deck.cards.size() > 0) {
			int min = 0;
			int max = deck.cards.size();
			int randomIdx = ThreadLocalRandom.current().nextInt(min, max);
			int randomCard = deck.cards.get(randomIdx);
			deck.cards.remove(randomIdx);
			cards.add(randomCard);
		} else {
			System.out.print("Game Over");
			System.exit(0);
		}
	}
	
	public void takeAndRemoveCardsFromPlayer(Player AnotherPlayer, int number) {
		//if the player has the number, delete the number from cards array
		
		int idx = 0;
		int currentSize = AnotherPlayer.cards.size();
		do{
			if(AnotherPlayer.cards.get(idx) == number) {
				AnotherPlayer.cards.remove(idx);
				cards.add(number);
				currentSize--;
			}
		
			idx ++;
		}while(idx < currentSize);
		
	}
	
	public void getInitialCards(Deck cards) {
		
		for(int i = 0; i < 8; i ++) {
			drawCard(cards);
		}
		
	}
	
	public void printoutCards() {
		System.out.println("printoutCards");
		for(int i :cards) {
			System.out.print(i+ " ");
		}
		System.out.println();
	}
	
	public void printoutNumberOfCards() {
		System.out.println("\ncards.size() "+ cards.size() );
	}
}
