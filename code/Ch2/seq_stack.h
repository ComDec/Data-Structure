//
// Created by 18113 on 2021/10/13.
// Function: SeqStack with push, pop, get_top, len, clean
// Potential Bug: Stack Overflow: maxsize = 100
//

#ifndef CODE_SEQ_STACK_H
#define CODE_SEQ_STACK_H

#include<iostream>
using namespace std;

template<class DataType>
class SeqStack
{
private:
    int maxsize = 100;
    DataType *data = new DataType[maxsize];
    int top;

public:
    SeqStack():top(0){};
    ~SeqStack();
    void push(DataType ele);
    void pop();
    void clean();

    DataType gettop();
    int len();
    bool isEmpty();

};

template<typename DataType>
SeqStack<DataType>::~SeqStack() {
    delete []data;
    top = 0;
}

template<typename DataType>
void SeqStack<DataType>::push(DataType ele)
{
    data[top] = ele;
    ++top;
}

template<typename DataType>
void SeqStack<DataType>::pop()
{
    --top;
}

template<typename DataType>
void SeqStack<DataType>::clean() {
    top = 0;
}

template<typename DataType>
DataType SeqStack<DataType>::gettop()
{
    return data[top-1];
}

template<typename DataType>
int SeqStack<DataType>::len() {
    return top;
}

template<typename DataType>
bool SeqStack<DataType>::isEmpty() {
    if (top > 0)
        return false;
    else
        return true;
}
#endif //CODE_SEQ_STACK_H
