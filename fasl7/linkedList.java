package fasl7;

public class linkedList {
    public Node head;
    
    public linkedList(){
        head = null;
    }

    public void add(int data) {
        Node newNode = new Node(data);
        
        if (head == null) {
            head = newNode;  
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;  
            }
            temp.next = newNode;  
        }
    }

    
}

class Node {
    public int data;
    public Node next;

    
    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}