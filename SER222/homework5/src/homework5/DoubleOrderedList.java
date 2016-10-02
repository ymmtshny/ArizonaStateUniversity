package homework5;

public class DoubleOrderedList<T extends Comparable<? super T>> extends DoubleList<T> implements OrderedListADT<T>{

	
	public DoubleOrderedList() {
		super();
	}
	
	public void add(T element) {
		DoubleNode<T> newNode = new DoubleNode<T>(element);
		
		
		if(head == null) {
			head = newNode;
		} else {
			if(count == 1) {
				head.setNext(newNode);
				newNode.setPrevious(head);
				head = newNode;	
			} else {
//			
				DoubleNode<T> tempNode = head;
				int index = 0;
				while((tempNode.getElement().compareTo(element) >= 0)) {
						
					tempNode = tempNode.getPrevious();
					index ++;
				}
				
				System.out.println("temp"+tempNode.getElement().toString());
				newNode.setPrevious(tempNode.getPrevious());
				newNode.setNext(tempNode);
				tempNode.setPrevious(newNode);
				tempNode.getPrevious().setNext(newNode);
				
				
			}
		}
		
		count ++;
	}


}
