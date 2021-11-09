//
// Created by 18113 on 2021/11/9.
//

#ifndef CODE_PRIORITY_QUEUE_H
#define CODE_PRIORITY_QUEUE_H

using namespace std;

template<class DataType>
class priority_queue
{

private:
    int currentSize;
    DataType * data;
    int maxSize;
public:
    explicit priority_queue(int capacity=100);
    ~priority_queue();
    bool isEmpty();
    void enQueue(DataType x);
    DataType deQueue();
    DataType GetHead();
    void doubleSpace();
    void bulidHeap();
    void perecolateDown(int hole);
    void transver();

};

template<typename DataType>
priority_queue<DataType>::priority_queue(int capacity) {
    maxSize = capacity;
    data = new DataType[maxSize];
    // This is not obligatory!
    data[0] = currentSize;
    currentSize = 0;
}

template<typename DataType>
priority_queue<DataType>::~priority_queue(){
    delete [] data;
}

template<typename DataType>
bool priority_queue<DataType>::isEmpty() {
    return (currentSize == 0);
}

template<typename DataType>
void priority_queue<DataType>::doubleSpace() {

    maxSize *=2;
    auto *temp = new DataType[maxSize];

    for(int i=1; i<=currentSize; ++i)
        temp[i] = data[i];

    cout << "double space to " << maxSize << endl;
    data = temp;
    delete []temp;
}

template<typename DataType>
void priority_queue<DataType>::enQueue(DataType x) {

    if (currentSize == maxSize-1)
        doubleSpace();

    int hole = ++currentSize;

    // In this step, hole/2 is the lower integer of "hole/2"
    // Up! Until we find the a node lower than us!
    // Just consider the problem in the substructure of tree, there are only father, left and right.
    for(; hole > 1 && x <data[hole/2]; hole/=2)
        // Exchange the "hole" which the upper hole.
        data[hole] = data[hole/2];

    data[hole] = x;
}

template<typename DataType>
DataType priority_queue<DataType>::deQueue() {
    //When add elem, we give the value of "hole" as currentSize+1. The data[0] don't have values actually.
    DataType minElem = data[1];
    data[1] = data[currentSize--];
    // Now we have to "Sink" the node 1 which have the max values.
    perecolateDown(1);
    return minElem;
}

template<typename DataType>
void priority_queue<DataType>::perecolateDown(int hole) {
    int child;
    DataType temp = data[hole];

    for(; hole*2 <= currentSize; hole=child)
    {
        child = hole*2;
        // If left child greater then right child, we let current child index become the lowest one, that's right child.
        // We can't make sure than right child is greater then left child.
        if (child != currentSize && data[child+1] < data[child])
            child++;
        // Sink to the bottom of tree, exchange the "hole" node.
        if (data[child] < temp) data[hole] = data[child];
        else break;
    }
    data[hole] = temp;
}

template<typename DataType>
DataType priority_queue<DataType>::GetHead() {
    return data[1];
}

template<typename DataType>
void priority_queue<DataType>::transver() {
    for (int i=1; i<=currentSize; ++i)
        cout << data[i] << ' ';
    cout << endl;
}


template<typename DataType>
void priority_queue<DataType>::bulidHeap() {
    for (int i=currentSize/2; i>0; i--)
        perecolateDown(i);
}

#endif //CODE_PRIORITY_QUEUE_H
