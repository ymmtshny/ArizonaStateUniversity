import java.util.Scanner;

public class User extends Player{
	
	/**
	 * public int getUsersInput() {
	 * ---------------------------------------------------------
	 * This function asks the user which cards the user gets from
	 * the compute and returns the user input.
	 ***********************************************************/
	public int getUsersInput() {
		
		int inputNumber = 0;
		do {
			printoutCards();
			System.out.print("User's turn. Pick up a number ");
			Scanner scanner = new Scanner(System.in);
			inputNumber = scanner.nextInt();
			if(inputNumber < 1 || inputNumber > 13) {
				System.out.print("[ERROR] Enter a number from 1 to 13");
			}
		} while(inputNumber < 1 || inputNumber > 13);
		
		return inputNumber;
				
	}

	

}
