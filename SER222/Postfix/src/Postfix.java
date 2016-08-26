import java.util.Scanner;

public class Postfix {
	
	public static void main (String[] args) {
		
		String expression, again;
		int result;
	
		try {
			
			do {
				Scanner in = new Scanner(System.in);
				System.out.println("Enter a valid postfix expression:");
				expression = in.nextLine();
				
				System.out.println();
				System.out.println("The expression equals" + result);
				
				System.out.println("Evaluate another postfix expression [Y/N]?");
				again = in.nextLine();
			} while(again.equalsIgnoreCase("y"));
			
			
		} catch(Exception IOException) {
			System.out.println("Input exception reported");
		}
		
	}

}
