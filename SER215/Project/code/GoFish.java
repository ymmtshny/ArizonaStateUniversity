
public class GoFish {
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
		
		//start playing the game
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
		
		//the game ends and the program decides a winner.
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
		
		
	}
}
