/**
 * Created by shinyayamamoto on 2016/09/25.
 */
public class test {

    public static void main(String[] args) {

        System.out.println("**********Start Unit Test***********");
        System.out.println("----------cehck getRootElement()----------");
        System.out.println("----------should be 34----------");
        LinkedBinarySearchTree<Integer> BST = new LinkedBinarySearchTree<Integer>(34);
        System.out.println(BST.getRootElement());


        BST.addElement(45);
        BST.addElement(3);
        BST.addElement(87);
        BST.addElement(65);
        BST.addElement(32);
        BST.addElement(1);
        BST.addElement(12);
        BST.addElement(17);
        System.out.println("----------check toStirng()----------");
        System.out.println(BST.toString());
        System.out.println("----------check findMin()----------");
        System.out.println("Min: " + BST.findMin());
        System.out.println("----------check findMax()----------");
        System.out.println("Max: " + BST.findMax());
        System.out.println("----------check removeMax()----------");
        BST.removeMax();
        System.out.println(BST.toString());
        System.out.println("Max: " + BST.findMax());
        System.out.println("----------check find()----------");
        try {
            System.out.println(BST.find(32));
        } catch (ElementNotFoundException exception) {
            System.out.println(exception);
        }
        try {
            System.out.println(BST.find(0));
        } catch (ElementNotFoundException exception) {
            System.out.println(exception);
        }
        System.out.println("----------check contain()----------");
        if(BST.contains(17)) {
            System.out.println("BST contains 17");
        } else  {
            System.out.println("BST donesn't contain 17");
        }
        if(BST.contains(99)) {
            System.out.println("BST contains 99");
        } else  {
            System.out.println("BST donesn't contain 99");
        }

    }
}
