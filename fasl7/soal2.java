package fasl7;

//inja dar nazar greftam manzor ine ke list jadid moratab bashe vagarna akharie avali ro next esh ro mizashtim head2
public class soal2 {
    public static Node createNew(Node head1, Node head2){
        Node head;
        if(head1 == null){
            return head2;
        }
        if(head2 == null){
            return head1;
        }

        if(head1.data > head2.data){
            head = head2;
            head1 = head1.next;
        }
        else{
            head = head2;
            head2 = head2.next;
        }

        Node temp = head;

        while(head1 != null && head2 != null){
            if(head1.data > head2.data){
                temp.next = head2;
                head2 = head2.next;
            }
            else{
                temp.next = head1;
                head1 = head1.next;
            }
            temp = temp.next;
        }
        if(head1 == null){
            temp.next = head2;
        }
        else{
            temp.next = head1;
        }
        


        return head;

    }
}
