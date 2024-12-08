package fasl7;

public class soal5 {
    Node head;
    public soal5(){
        head = null;
    }
    public void push(int data){
        Node temp = new Node(data);
        temp.next = head;
        head = temp;
    }

    public int pop(){
        int res = head.data;
        head = head.next;
        return res;
    }

    void print(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        soal5 a = new soal5();
        a.push(20);
        a.push(10);
        a.push(35);
        a.push(2);
        a.print();
        System.out.println("poped : "+ a.pop());
        a.print();
        System.out.println("poped : "+ a.pop());
        a.print();
        System.out.println("poped : "+ a.pop());
        a.print();
        System.out.println("poped : "+ a.pop());
        a.print();
    }
}
