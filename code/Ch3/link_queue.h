//
// Created by 18113 on 2021/10/15.
//

#ifndef CODE_LINK_QUEUE_H
#define CODE_LINK_QUEUE_H
#include <iostream>
using namespace std;

template<class DataType>
class link_seq{
private:
    struct node{
        DataType data;
        struct node* next;
        node():next(NULL){};
        ~node(){};
    };
    struct node* head;
    struct node* tail;
    int size;

public:
    link_seq():head(NULL), tail(NULL), size(0){};
    ~link_seq();
    void enter(DataType ele);
    void leave();
    DataType getele();
    int getsize();
    void empty();
    bool isEmpty();
};

template<typename DataType>
link_seq<DataType>::~link_seq() {

    while(head)
    {
        auto temp = head;
        head = head->next;
        delete temp;
    }
}

template<typename DataType>
void link_seq<DataType>::enter(DataType ele) {
    auto InsertNode = new struct node;
    InsertNode->data = ele;
    InsertNode->next = NULL;
    if(tail)
    {
        tail->next = InsertNode;
        tail = InsertNode;
        size ++;
    }
    else
    {
        head = tail = InsertNode;
        size ++;
    }
}

template<typename DataType>
void link_seq<DataType>::leave() {
    auto *temp = head;
    head = temp->next;
    delete temp;
    size--;
}

template<typename DataType>
DataType link_seq<DataType>::getele() {
    if (size != 0)
        return head->data;
    else
        cout << "Access Denied for Sizeof: ";
        return 0;
}

template<typename DataType>
int link_seq<DataType>::getsize() {
    return size;
}

template<typename DataType>
void link_seq<DataType>::empty() {

    while(head && size !=0)
    {
        auto *temp = head;
        head = temp->next;
        delete temp;
        size --;
    }
    tail = NULL;

}

template<typename DataType>
bool link_seq<DataType>::isEmpty() {
    if( size ==0 )
        return true;
    else
        return false;
}
#endif //CODE_LINK_QUEUE_H
