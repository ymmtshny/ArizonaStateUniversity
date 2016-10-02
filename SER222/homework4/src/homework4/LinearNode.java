package homework4;

public class LinearNode<T> {
	
	// reference to next node in list 
	private LinearNode<T> next;

	// reference to last node in list 	
	private LinearNode<T> last;
	
	// element stored at this node
	 private T element;
	
	 
	 /**
	 *  Create empty node
	 */
	 public LinearNode() {
		 next = null;
		 last = null;
		 element = null;
	 }
	 
	 /**
	  * Create a node with element
	  */
	 public LinearNode(T elem) {
		 next = null;
		 last = null;
		 element = elem;
	 }
	 
	
	 /** 
	  * Set the next node
	  * @param the next node
	  */
	 public void setNext(LinearNode<T> node) {
		 next = node;
	 }
	 
	 /**
	  * Return the next node
	  * @return the next node
	  */
	 public LinearNode<T> getNext() {
		 
		 return next;
	 }
	 
	 /** 
	  * Set the last node
	  * @param the last node
	  */
	 public void setLast(LinearNode<T> node) {
		 last = node;
	 }
	 
	 /**
	  * Return the last node
	  * @return the last node
	  */
	 public LinearNode<T> getLast() {
		 
		 return last;
	 }
	 
	
	 
	 /**
	  * Set the element
	  * @param the element of this node
	  */
	 public void setElement(T elem) {
		 element = elem;
	 }
	 
	 /**
	  * Get the element
	  * @return the element of thid node
	  */
	 public T getElement() {
		 return element;
	 }
	 
	
	  
	  
}
