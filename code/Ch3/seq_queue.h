//
// Created by 18113 on 2021/10/15.
//

#ifndef CODE_SEQ_QUEUE_H
#define CODE_SEQ_QUEUE_H

#include <iostream>
using namespace std;

template<class DataType>
class seq_queue
{
private:

        int maxsize = 200;
        DataType *data = new DataType[maxsize];
        int head, tail;

public:
    seq_queue():head(0),tail(0){};
    ~seq_queue();
    void enter(DataType ele);
    void leave();
    void empty();
    DataType getele();
    int getsize();
    bool isEmpty();

};

template<typename DataType>
seq_queue<DataType>::~seq_queue<DataType>() {
    delete []data;
}

template<typename DataType>
void seq_queue<DataType>::enter(DataType ele) {
    if (tail < maxsize)
        data[tail++] = ele;
    else
        cout << "Queue Overflow" << endl;
}

template<typename DataType>
void seq_queue<DataType>::leave() {
    if(head <= tail)
        head++;
    else
        cout << "Override Boundary" << endl;
}

template<typename DataType>
void seq_queue<DataType>::empty() {
    head = tail = 0;
}

template<typename DataType>
DataType seq_queue<DataType>::getele() {
    if (tail-head > 0)
        return data[head];
    else
        cout << "Access Denied for Sizeof: ";
    return 0;
}

template<typename DataType>
int seq_queue<DataType>::getsize() {
    return tail - head;
}

template<typename DataType>
bool seq_queue<DataType>::isEmpty() {
    if( tail-head == 0)
        return true;
    else
        return false;
}

#endif //CODE_SEQ_QUEUE_H
