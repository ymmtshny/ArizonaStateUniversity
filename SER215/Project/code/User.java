import java.util.Scanner;

public class User extends Player{
	
	/**
	 * public int getUsersInput() {
	 * ---------------------------------------------------------
	 * This function asks the user which cards the user gets from
	 * the compute and returns the user input.
	 ***********************************************************/
	public int getUsersInput() {
		
		printoutCards();
		System.out.print("User's turn. Pick up a number ");
		Scanner scanner = new Scanner(System.in);
		int inputNumber = scanner.nextInt();
		
		return inputNumber;
				
	}

	

}
