//
// Created by 18113 on 2021/10/13.
//

#ifndef CODE_LINK_STACK_H
#define CODE_LINK_STACK_H
#include <iostream>
using namespace std;

template<class DataType>
class LinkStack
{
private:
    struct StackNode{
        DataType data;
        struct StackNode *next;
    };
    struct StackNode * top;
    int size;

public:
    LinkStack():size(0),top(NULL){};
    ~LinkStack();
    void push(DataType ele);
    void pop();
    DataType gettop();
    int len();
    void clean();
    bool isEmpty();

};

template<typename DataType>
LinkStack<DataType>::~LinkStack() {

}

template<typename DataType>
void LinkStack<DataType>::push(DataType ele){
    struct StackNode *InsertNode = new struct StackNode;
    InsertNode->data = ele;
    InsertNode->next = top;
    top = InsertNode;
    ++size;
}

template<typename DataType>
void LinkStack<DataType>::pop() {
    struct StackNode *temp = top;
    top = temp->next;
    delete temp;
    --size;
}

template<typename DataType>
bool LinkStack<DataType>::isEmpty() {
    if (size > 0)
        return false;
    else
        return true;
}

template<typename DataType>
void LinkStack<DataType>::clean() {
    while(size != 0)
        pop();
    top = NULL;
}

template<typename DataType>
DataType LinkStack<DataType>::gettop() {
    return top->data;
}

template<typename DataType>
int LinkStack<DataType>::len() {
    return size;
}
#endif //CODE_LINK_STACK_H
