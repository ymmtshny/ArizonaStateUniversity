    import java.util.Objects;
    import java.util.Scanner;

/** The class MagicSquare n2 numbers from standard input and tests whether they
 *  form a magic square when put into matrix form.An n x n matrix that is filled with the whole numbers
 *  1, 2, 3, ... n2 is a magic square if the sum of the elements in each row,
 *  in each column, and in the two diagonals is the same value.
 *
 * @author  Shinya Yamamoto
 * @version 1.0 Oct 18, 2016.
 */
public class MagicSquare {

    public static void main(String [] args) {

        // test1 :8 1 6 3 5 7 4 9 2 => true
        // test2 :8 1 6 3 5 7 4 9   => The number of input is not n^2.
        // test3 :8 1 6 3 5 7 4 9 8 => All number is not unique.
        // test4 :2 7 6 9 5 1 4 3 8 => true
        // test5 :8 1 6 5 3 7 2 9 4 => false
        // test6 :12 1 14 7 13 8 11 2 3 10 5 16 6 15 4 9 => true


        System.out.print("Enter the numbers: ");
        Scanner scan = new Scanner(System.in);
        String inputString = scan.nextLine();
        int[] inputArray = getUserInputs(inputString);
        debugPrintArray(inputArray);

        if (!checkNumberOfInputs(inputArray)) {
            System.out.println("*******************************");
            System.out.println("The number of input is not n^2.");
            System.out.println("*******************************");
            System.exit(0);
        }

        if (!checkUniqueness(inputArray)) {
            System.out.println("*******************************");
            System.out.println("All number is not unique.");
            System.out.println("*******************************");
            System.exit(0);
        }


        if (checkSumOfRowsAreSame(inputArray) && checkSumOfColumesAreSame(inputArray) && checkSumOfDiagonalsAreSame(inputArray)) {
            System.out.println("*******************************");
            System.out.println("true");
            System.out.println("*******************************");
        } else {
            System.out.println("*******************************");
            System.out.println("false");
            System.out.println("*******************************");
        }

    }

    /** This method perses a line string that contains numbers separated by whitespace into an int array.
     *
     * @param inputString   a line string that contains numbers separated by whitespace.
     * @return			    int array that contains the numbers in inputString.
     */
    public static int[] getUserInputs(String inputString) {
        String[] stringArray = inputString.split(" ");
        int[] tempArray = new int[stringArray.length];
        for (int i = 0; i < stringArray.length; i ++ ) {
            tempArray[i] = (int)Integer.parseInt(stringArray[i]);
        }
        return  tempArray;
    }

    /** This method prints out int array.
     *
     * @param array   int array
     */
    public static void debugPrintArray(int [] array) {
        System.out.println("---- debugPrintArray ----");
        for( int number: array) {
            System.out.print(number + " ");
        }
        System.out.println("\n-------------------------");
    }

    /** This method checks if the array length is n^2
     *
     * @param array int array
     * @return      if the length of array is n^2, return true. Otherwise false.
     */
    public static Boolean checkNumberOfInputs(int [] array) {
        System.out.println("---- checkNumberOfInputs ----");
        int size = array.length;
        for(int i = 0; i < size; i ++) {
            int squre = i*i;
            if(squre == size) {
                System.out.println("---- return true ----");
                return true;
            }
        }
        System.out.println("---- return false ----");
        return false;
    }

    /** This method checks if each element of array is unique.
     *
     * @param array int array
     * @return      if any elements are not duplicated, return true. Otherwise false.
     */
    public static Boolean checkUniqueness(int [] array) {
        System.out.println("---- checkUniqueness ----");
        for(int i = 0; i < array.length; i ++) {
            for(int k = i + 1; k < array.length; k ++) {
                if (array[i] == array[k]) {
                    System.out.println("---- return false ----");
                    return false;
                }
            }
        }
        System.out.println("---- return true ----");
        return true;
    }


    /** This method checks if the sum of rows are all same when int array are
     * in the form of nxn matrics.
     *
     * @param array int array
     * @return      if the sum of rows are all same, return true. Otherwise false.
     */
    public static Boolean checkSumOfRowsAreSame(int [] array) {
        System.out.println("---- checkSumOfRowsAreSame ----");
        int size = (int)Math.sqrt(array.length);
        System.out.println("n^2 => n = " + size);
        int[] sumOfRows = new int[size];
        int index = 0;
        for(int i = 0; i < array.length; i ++) {
            if (i % size == 0) {
                int tempSum = 0;
                for(int j = i; j < i + size; j ++) {
                    tempSum += array[j];
                }
                sumOfRows[index] = tempSum;
                index ++;
            }
        }

        return allArrayElementsAreSame(sumOfRows);
    }

    /** This method checks if the sum of Diagonal are same when int array are
     * in the form of nxn matrics.
     *
     * @param array int array
     * @return      if the sum of Diagonal are same, return true. Otherwise false.
     */
    public static  Boolean checkSumOfDiagonalsAreSame(int[] array) {
        System.out.println("---- checkSumOfDiagonalsAreSame ----");
        int size = (int)Math.sqrt(array.length);
        int increment = 0;
        int decrement = size - 1;
        int sumofDiagonalA = 0;
        int sumofDiagonalB = 0;
        for(int k = 0; k < size; k++) {
            sumofDiagonalA += array[k * size + increment];
            increment ++;
        }

        for(int k = 0; k < size; k++) {
            sumofDiagonalB += array[k * size + decrement];
            decrement --;
        }

        return sumofDiagonalA == sumofDiagonalB;
    }

    /** Boolean checkSumOfColumesAreSame(int [] array)
     * This method checks if the sum of column are all same when int array are
     * in the form of nxn matrics.
     *
     * @param array int array
     * @return      if the sum of columns are all same, return true. Otherwise false.
     */
    public static Boolean checkSumOfColumesAreSame(int [] array) {
        System.out.println("---- checkSumOfColumesAreSame ----");
        int size = (int)Math.sqrt(array.length);
        int[] sumOfColumes = new int[size];
        int index = 0;
        for(int i = 0; i < size; i ++) {
            int tempSum = 0;
            for(int j = 0; j < size; j += size) {
                tempSum += array[j];
            }
            sumOfColumes[index] = tempSum;
            index ++;
        }
        return allArrayElementsAreSame(sumOfColumes);
    }


    /** This method checks if the elements of int array are all same value.
     *
     * @param array  int array
     * @return       if the elements of int array are all same value, return true. Otherwise false.
     */
    public static Boolean allArrayElementsAreSame(int [] array) {
        System.out.println("---- allArrayElementsAreSame ----");
        debugPrintArray(array);
        Boolean isSame = false;
        if (array.length > 0) {
            int sample = array[0];
            for(int i: array) {
                if (i != sample) {
                    System.out.println("---- false ----");
                    return  false;
                }
            }
            isSame = true;
        }
        System.out.println("----"+ isSame +" ----");
        return isSame;
    }
}
