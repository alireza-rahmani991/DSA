#include <iostream>

using namespace std;

class twoQueues{
private:
    int* data;
    int size1, full, f1, f2, r1, r2;
public:
    twoQueues(int size1, int size2);
    twoQueues();
    ~twoQueues();
    void enQueue(int num, int queueNum);
    int deQueue(int queueNum);
    void print();
};


twoQueues::twoQueues(){
    full = 100;
    data = new int[full];
    size1 = 50;
    f1 = 0;
    f2 = size1;
    r1 = -1;
    r2 = size1 - 1;
}

twoQueues::twoQueues(int size1, int size2){
    this->full = size1 + size2;
    data = new int[full];
    this->size1 = size1;
    f1 = 0;
    f2 = size1;
    r1 = -1;
    r2 = size1 - 1;
}

twoQueues::~twoQueues() {
    delete[] data;
}

void twoQueues::enQueue(int num, int queueNum) {
    if (queueNum == 1) {
        if ((r1 + 1) >= size1) {
            cout<<"queue 1 is full."<<endl;
        }
        r1++;
        data[r1] = num;
    }
    else if (queueNum == 2) {
        if ((r2 + 1) >= full) {
            cout<<"queue 2 is full."<<endl;
        }
        r2++;
        data[r2] = num;
    }
}

int twoQueues::deQueue(int queueNum) {
    if (queueNum == 1) {
        if (r1 < f1) {
            cout<<"queue 1 is empty."<<endl;
        }
        return data[f1++];
    }
    else if (queueNum == 2) {
        if (r2 < f2) {
            cout<<"queue 2 is empty."<<endl;
        }
        return data[f2++];
    }
}

void twoQueues::print() {
    cout << "queue 1: ";
    for (int i = f1; i <= r1; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "queue 2: ";
    for (int i = f2; i <= r2; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}


int main() {
    twoQueues q(50, 50);

    q.enQueue(10, 1);
    q.enQueue(20, 1);
    q.enQueue(30, 1);

    q.enQueue(100, 2);
    q.enQueue(200, 2);
    q.enQueue(300, 2);

    q.print();

    cout<<q.deQueue(1)<<endl;
    cout<<q.deQueue(2)<<endl;

    q.print();
}