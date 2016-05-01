import java.util.Scanner;

public class MeanAndStandardDeviation {
	
	
	public static void main(String [] args)
	{
		int numberOfData = 0;
		double inputNumber = 0;
		int count = 0;
		double total = 0;
		double avg = 0;
		double std = 0;
		double numeratorOfstd = 0;
		Scanner in = new Scanner(System.in);
	
		System.out.println("Enter number of data");
		numberOfData = in.nextInt();
		
		double myArray[] = new double[numberOfData]; //keeps the data
		
		 do {
		 	System.out.print("Enter a number ");
		 	inputNumber = in.nextDouble();
		 	myArray[count] = inputNumber;
		 	total = total + inputNumber;
		 	count++;
		 } while(count < numberOfData);
		 
		 
		 avg = total / (double)numberOfData;
		 
		 for(int i = 0; i < numberOfData; i ++) {
			 numeratorOfstd = numeratorOfstd + (myArray[i] - avg)*(myArray[i] - avg);
		 }
		 
		 std = Math.sqrt(numeratorOfstd / (numberOfData - 1));
		 
		 System.out.println("---------------------");
		 System.out.println("Mean " + avg);
		 System.out.println("std  " + std);
	 
	}

}
