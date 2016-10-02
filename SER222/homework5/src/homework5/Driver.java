package homework5;



/**
 * DoubleOrderedList testing area.
 * 
 * @author (your name), Acuna
 * @version (version)
 */
public class Driver {
	
	public static long fib(int n) {
		
        if(n <= 0) {
        	return 0;
        } 
        
        int[] array = new int[n];
        for (int index = 0; index < n; index ++) {
        	
        	if(index == 0) {
        		array[index] = 1;
        		
        	} else if (index == 1) {
        		array[index] = 1;
        		
        	} else {
        		array[index] = array[index -1] + array[index -2];
        		
        	}
        }
               
        return array[n-1];
	}
	
    public static void main(String [] args) {
        DoubleOrderedList<Integer> list = new DoubleOrderedList<>();
        
        
        System.out.println(fib(0));
        
        //RA: These are _extremely_ simple tests - do not use them when doing
        //    your writeup.
        
        list.add(23);
        System.out.println("list " + list);
        list.add(24);	
        System.out.println("list " + list);
        list.add(16);
        System.out.println("list " + list);
        list.add(29);	
        System.out.println("list " + list);
        list.add(7);
        System.out.println("list " + list);
        list.add(17);	
        System.out.println("list " + list);
        list.add(9);	
        System.out.println("list " + list);
        list.add(13);	
        System.out.println("list " + list);
        list.add(14);	
        System.out.println("list " + list);
        list.add(1);
        
        
        System.out.println(list);
        
        list.remove(7);
//        list.removeFirst();
        list.remove(17);
        list.removeLast();
        list.remove(14);
        list.removeLast();
        
        System.out.println(list);
        
        /* Test Results:
            1 3 7 9 13 14 16 17 23 24 
            3 9 13 16 
        */
    }
}
