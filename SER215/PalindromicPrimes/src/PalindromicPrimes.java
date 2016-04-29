import java.util.Scanner;

public class PalindromicPrimes {

	public static void main(String [] args)
	{
		 int inputInteger; 			
		 int num = 0;				
		 int count = 0;				
		 Boolean isPrime = false;
		 Boolean isPalindrom = false;
		 Scanner in = new Scanner(System.in);
	 
		 //the user input should be 1 to 100
		 do {
		 	System.out.println("Enter an integer from 1 to 100");
		 	inputInteger = in.nextInt();
		 } while(inputInteger > 100 || inputInteger < 1);
		 		
		 System.out.println("This program outputs the first "+ inputInteger + " palindromic prime."); 
		 
	     do{
	    	 
	    	 isPrime = PalindromicPrimes.isPrimeNumber(num);
		     isPalindrom = PalindromicPrimes.isPalindromicNumber(num);
		     
	    	 if(isPrime&&isPalindrom){
		    	 System.out.print(" " + num);
		    	 count++;
		    	 
		    	 //Display 10 numbers per line
		    	 if(count % 10 == 0){
		    		 System.out.println();
		    	 }
		     }
	    	 
	    	 num++;
	    	 
	     }while(count < inputInteger);
	     
	     
	    	
	}
	
/**
 *　 public static Boolean isPrimeNumber (int myNumber)
 *　---------------------------------------------------------------
 *	This method is used to check if an integer is a prime
 *	number. If the integer is prime, then the methods returns true: 
 *	otherwise, the methods returns false.
 *
 *	@param myNumber: the number you want to check
 */
	 public static Boolean isPrimeNumber (int myNumber) {
	        
		 if(myNumber < 2) {
			 return false;
		 }
		 
		  for(int i = 2; i < myNumber; i ++) {
			if(myNumber % i  == 0) {
	    		return false;
	    	} 
		  }
	    	 
		  return true;
	  }
	 
 /**
  *　 public static Boolean isPalindromicNumber (int myNumber)
  *　---------------------------------------------------------------
  *	This method is used to check if an integer is palindromic.
  * In this function, the integer is converted to char array
  * and compare the elements of the array to decide if the integer 
  * is palindromic.
  *
  *	@param myNumber: the number you want to check
  */	  
	  public static Boolean isPalindromicNumber (int myNumber) {
		  
		  char[] chars = ("" + myNumber).toCharArray();
		  
		  int head = 0;
		  int tail = chars.length - 1;
		    while (tail > head) {
		        if (chars[head] != chars[tail]) {
		        	return false;
		        }
		        ++head;
		        --tail;
		    }
		    
		  return true;
	  }
	
}
