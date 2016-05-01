import java.util.concurrent.ThreadLocalRandom;

public class Computer extends Player{
	
	/**
	 * public int getComputersInput() {
	 * ---------------------------------------------------------
	 * This function return a number from 1 to 13, which is the
	 * number that computer wants to get from user.
	 ***********************************************************/
	public int getComputersInput() {
		
		printoutCards();
		int MIN = 1;
		int MAX = 13;
		int randomNumber = ThreadLocalRandom.current().nextInt(MIN, MAX);
		
		System.out.print("Computer's turn. Computer pick up " + randomNumber);
		return randomNumber;
				
	}
	
	
}
