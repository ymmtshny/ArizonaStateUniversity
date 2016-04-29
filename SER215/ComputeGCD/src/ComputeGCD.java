import java.util.Scanner;

public class ComputeGCD {

	public static void main(String [] args)
	{
		
		//variables
		 int numberOfPairs;
		 Scanner in = new Scanner(System.in);
	 
		 //
		 printDescription();
		 //input
		 do {
		 	System.out.println("Enter the number of pairs to compute GCD");
		 	numberOfPairs = in.nextInt();
		 } while(numberOfPairs < 1); //reject the user input less than 1.
		 
		 //allocate arrays
		 int numbersX[] = new int[numberOfPairs];
		 int numbersY[] = new int[numberOfPairs];
		 int GCD[] = new int[numberOfPairs];
		 
		 for(int i = 0; i < numberOfPairs; i ++) {
			 
			 System.out.println("Enter the number of pair #" + (i +1) );
			 System.out.print("First number ");
			 numbersX[i] = in.nextInt();
			 System.out.print("Second number ");
			 numbersY[i] = in.nextInt();
			 
			 //compute GCD
			 GCD[i] = computeGCD(numbersX[i], numbersY[i]);
		 } 
		 
		 //output
		 for(int i = 0; i < numberOfPairs; i ++) {
			 
			 System.out.println(numbersX[i] + " " + numbersY[i] + " GCD " +  GCD[i]);
			 
		 } 
		 
	     
	     
	    	
	}

/**
 * public static int computeGCD (int X, int Y) 
 *　---------------------------------------------------------------
 * TThis function accepts two integers as arguments. 
 * Then compute GCD by following Euclid's division algorithm and return GCD.
 * @param X  
 * @param Y
 ****************************************************************/
	public static int computeGCD (int X, int Y) {
		
		int A;
		int B;
		int C;
		int GCD;
		
		if(X >= Y) {
			A = X;
			B = Y;
		} else {
			A = Y;
			B = X;
		}
		
		do{
			C = A % B;
			GCD = B; //if C = 0; B is GCD
			//update for next calculation
			A = B;
			B = C;
		}while(C != 0);
		
		return GCD;
	
	}
	
/**
 *　public static void printDescription ()
 *　---------------------------------------------------------------
 * This function just print out the instruction of this program
 ****************************************************************/
	 public static void printDescription () {
	        
		 System.out.println("This program computes Greatest Common Deviser of two integers.");
		 System.out.println("The user can choose how many pairs of integers to compute GCD.");
		 System.out.println("--------------------------------------------------------------");
	  }
}
