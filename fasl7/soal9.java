package fasl7;

public class soal9 {
    public static void duplicate(Node current){
        if(current == null){
            return;
        }
        Node temp = new Node(current.data);
        temp.next = current.next;
        current.next = temp;
        duplicate(temp.next);
    }


    public static void main(String[] args) {
        linkedList a = new linkedList();
        a.add(5);
        a.add(25);
        a.add(45);
        Node temp = a.head;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();

        duplicate(a.head);

        temp = a.head;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }

}
