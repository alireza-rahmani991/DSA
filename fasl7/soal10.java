package fasl7;

public class soal10 {

    public static Node sortLinkedList(Node head) {
        if (head == null || head.next == null) {
            return head; 
        }

        boolean swapped;
        Node dummy = new Node(0); 
        dummy.next = head;

        do {
            swapped = false;
            Node prev = dummy; 
            Node current = dummy.next;

            while (current != null && current.next != null) {
                if (current.data > current.next.data) {
                    
                    Node nextNode = current.next;
                    current.next = nextNode.next;
                    nextNode.next = current;
                    prev.next = nextNode;

                    swapped = true;
                }
                
                prev = prev.next;
                current = prev.next;
            }
        } while (swapped);

        return dummy.next; 
    }
    public static void main(String[] args) {
        linkedList a = new linkedList();
        a.add(25);
        a.add(2);
        a.add(35);
        a.add(6);

        Node temp = a.head;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();

        

        temp = sortLinkedList(a.head);
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
}
