package homework4;
/**
 * This program provides an implementation of the Deque interface
 * and demonstrates it.
 * 
 * @author (your name), Acuna
 * @version (version)
 */
import java.util.NoSuchElementException;
    
//TODO: implement.
public class BaseDeque<Item> implements Deque<Item> {

	private int count = 0;
	private LinearNode<Item> front;
	private LinearNode<Item> rear;
    /**
     * Program entry point for deque. 
     * @param args command line arguments
     */    
    public static void main(String[] args) {
        BaseDeque<Integer> deque = new BaseDeque<>();

        //standard queue behavior
        deque.enqueueBack(3);
        deque.enqueueBack(7);
        deque.enqueueBack(4);
        deque.dequeueFront();        
        deque.enqueueBack(9);
        deque.enqueueBack(8);
        deque.dequeueFront();
        System.out.println("size: " + deque.size());
        System.out.println("contents:\n" + deque.toString());   

        //deque features
        System.out.println(deque.dequeueFront());        
        deque.enqueueFront(1);
        deque.enqueueFront(11);                         
        deque.enqueueFront(3);                 
        deque.enqueueFront(5);
        System.out.println(deque.dequeueBack());
        System.out.println(deque.dequeueBack());        
        System.out.println(deque.last());                
        deque.dequeueFront();
        deque.dequeueFront();  
        System.out.println(deque.first());        
        System.out.println("size: " + deque.size());
        System.out.println("contents:\n" + deque.toString());      
        
      //my test starts form here
        BaseDeque<Integer> testDeque = new BaseDeque<>();
        //exception check
        // should throw NoSuchElementException
//        testDeque.dequeueFront();  
//        testDeque.dequeueBack();
//        System.out.println(testDeque.last());   
//        System.out.println(testDeque.first());   
        System.out.println("-----------------------------");
        System.out.println("starting enqueueFront works ?");
        testDeque.enqueueFront(1);
        testDeque.enqueueFront(2);
        testDeque.enqueueFront(3);
        testDeque.enqueueFront(4);
        System.out.println(testDeque.last());  
        System.out.println("contents:\n" + testDeque.toString());
        System.out.println("-----------------------------");
        
   
        System.out.println("cehck if front and back are same when the deque has only one element.");
        BaseDeque<Integer> testDeque1 = new BaseDeque<>();
        testDeque1.enqueueBack(5);
        System.out.println(testDeque1.last());
        System.out.println(testDeque1.first());
        System.out.println("-----------------------------");
        
        System.out.println("check if the size is not chnaged after last() and firt()");
        BaseDeque<Integer> testDeque2= new BaseDeque<>();
        testDeque2.enqueueBack(5);
        System.out.println("size: " + testDeque2.size());
        System.out.println(testDeque2.last());
        System.out.println("size: " + testDeque2.size());
        
        System.out.println("size: " + testDeque2.size());
        System.out.println(testDeque2.first());
        System.out.println("size: " + testDeque2.size());
        System.out.println("-----------------------------");
        
        System.out.println("Does dequeueFront after enqueueBack work right?");
        BaseDeque<Integer> testDeque3= new BaseDeque<>();
        testDeque3.enqueueBack(1);
        testDeque3.enqueueBack(2);
        testDeque3.enqueueBack(3);
        testDeque3.enqueueBack(4);
        testDeque3.dequeueFront();
        testDeque3.dequeueFront();
        System.out.println(testDeque3.toString());
        
    }

    public BaseDeque() {
    	count = 0;
        front = new LinearNode<>();
        rear  = new LinearNode<>();
      
    }
    
	
	public void enqueueFront(Item element) {
		
		if (isEmpty()) {
	        front.setElement(element);
	        rear.setElement(element);
	        rear.setLast(front);
		} else {
			
			LinearNode<Item> node = new LinearNode<>(element);
			
			if(size() == 1) {
				rear.setLast(node);
			}
			
			node.setNext(front);
			front.setLast(node);
			front = node;
	        
		}
		
		count++;
	}

	
	public void enqueueBack(Item element) {
		
		
		if (isEmpty()) {
	        front.setElement(element);
	        rear.setElement(element);
	        front.setNext(rear);
	        
		} else {
			
			LinearNode<Item> node = new LinearNode<>(element);
			
			if(size() == 1) {
				front.setNext(node);
			}
			
			node.setLast(rear);
			rear.setNext(node);
			
	        rear = node;
		}
		
		count++;
	}

	
	public Item dequeueFront() throws NoSuchElementException {
		
		if(isEmpty()){
		     throw new NoSuchElementException();
		}
		
		LinearNode<Item> lastFront = front;
	
		if(size() == 1) {
			front.setLast(rear);
		} else {
			front = front.getNext();
			front.setLast(null);
		}
		
		count--;
		return lastFront.getElement();
	}


	public Item dequeueBack() throws NoSuchElementException {
		
		if(isEmpty()){
		     throw new NoSuchElementException();
		}
		
		LinearNode<Item> lastRear = rear;
		
		if(size() == 1) {
			rear.setNext(front);
		} else {
			rear = rear.getLast();
			rear.setNext(null);
		}
		
		count--;
		return lastRear.getElement();
	
	}
	
	public Item first() throws NoSuchElementException {
		
		if(isEmpty()){
		     throw new NoSuchElementException();
		}

		return front.getElement();
	}
	
	public Item last() throws NoSuchElementException {
		
		if(isEmpty()){
		     throw new NoSuchElementException();
		}
		
		return rear.getElement();
	}

	public boolean isEmpty() {
		
		if(size() == 0) {
			
			return true;
		} else {
			return false;
		}
	}

	public int size() {
		
		return count;
	}
	
	@Override
    public String toString() {
		
		String str = new String();
		LinearNode<Item> lastNode = rear;
		
		while(lastNode != null) {			
			str += lastNode.getElement().toString();
			lastNode = lastNode.getLast();
			if(lastNode != null) {
				str += " ";
			}
		}
		
		return str;
	}
} 