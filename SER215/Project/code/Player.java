public class Player {
	public int cards []; //should be mutable
	public int point = 0; //the number of groups
	
	public void checkGroup() {
		//check if there are 4 same numbers
		//if yes, call addPoint();
	}
	
	public int getPoint() {
		return point;
	}
	
	public void addPoint() {
		point = point + 1;
	}
	
	public void askForCard(int[] cards, int number) {
		//check if the other has 'number' card.
		
		
	}
	
	public void drawCard() {
		//get number from Cards object's cards array
	}
	
	public void takeCard(Player player, int number) {
		//if the other player has number, add the number from cards array
	}
	
	public void giveCard(Player player, int number) {
		//if the player has the number, delete the number from cards array
	}
	
	public void getInitialCards() {
		//do 'draw cards' for 8 times
	}
}
