#include <iostream>

using namespace std;

class priorityQueue{
private:
    int len, size, rear;
    int* queue;
public:
    priorityQueue(int size);
    priorityQueue();
    void enQueue(int num);
    int deQueue();
    void print();
};

priorityQueue::priorityQueue(int size){
    this->size = size;
    len = 0;
    rear = size - 1;
    queue = new int[size];
}


priorityQueue::priorityQueue(){
    size = 10;
    len = 0;
    rear = size - 1;
    queue = new int[size];
}

void priorityQueue::enQueue(int num){
    if(len == size){
        cout<<"cannot add anymore elements to the queue"<<endl;
        return;
    }
    
    rear = (rear + 1) % size;
    queue[rear] = num;
    len++;

}


int priorityQueue::deQueue(){ //inja age donbal max begardim saf olaviat nozoli darim va age donbal min begardim saf olaviat soudi
    if(len <= 0){
        cout<<"there is no elmenet to remove"<<endl;
        return -1;
    }
    
    int minIndex = 0;
    for(int i = 1; i < len; i++){
        if(queue[(rear + 1 - i + size) % size ] < queue[minIndex]){
                minIndex = (rear + 1 - i + size) % size;
        }
    }

    int res = queue[minIndex];
    for(int i = minIndex; i != rear; i = (i + 1) % size){
        queue[i] = queue[(i+1)%size];
    }

    rear = (rear - 1 + size) % size;
    len--;
    return res;
}

void priorityQueue::print(){
    for (int i = 0; i < len; i++) {
        int index = (rear - i + size) % size;
        cout << queue[index] << "  ";
    }
    cout << endl;
}



int main(){
    priorityQueue a(6);
    a.enQueue(5);
    a.enQueue(6);
    a.enQueue(3);
    a.enQueue(10);
    a.enQueue(13);
    a.enQueue(2);

    a.print();

    cout<<a.deQueue()<<endl;
    cout<<a.deQueue()<<endl;

    a.enQueue(9);
    a.enQueue(17);
    a.print();
}