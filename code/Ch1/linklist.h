//
// Created by 18113 on 2021/10/8.
//

#ifndef CODE_LINKLIST_H
#define CODE_LINKLIST_H

#include <cstring>
#include <iostream>

using namespace std;

template<typename DataType>
struct node{
    DataType value; //Value
    struct node *next; //Pointer
};


template<class DataType>
class linklist
{
private:
    struct node<DataType> *head; //head pointer
    struct node<DataType> *cur; //current pointer
    int length;

public:
    linklist(){
        cur = NULL;
        length = 0;
        head = new struct node<DataType>;
        head -> next = NULL;
        head -> value = length;
    }
    ~linklist(){}
    void add(DataType data); //Add data from the end
    void move(int idx);
    DataType getData(int idx);
    void remove(int idx);
    void insert(int idx, DataType data);
    void show() const;
    void modify(int idx, DataType data);
    int getLen() const{
        return length;
    }
};

template<typename DataType>
void linklist<DataType>::add(DataType data)
{
    auto *temp = new struct node<DataType>;
    temp->value = data;
    temp->next = NULL;
    if (NULL == head->next)
    {
        head ->next = temp;
        cur = temp;
    }
    else
    {
        cur->next = temp;
        cur = temp;
    }
    length ++;
}

template<typename DataType>
void linklist<DataType>::move(int idx){
    if(0 > idx || length < idx)
    {
        cout  << "Error in move to idx" << endl;
    }
    auto *p = head;
    int j = 0;
    while(j != idx)
    {
        p = p->next;
        j++;
    }
    if (j == idx)
    {
        cur = p;
    }
    else
    {
        cout << "Error in move" << endl;
    }

}

template<typename DataType>
DataType linklist<DataType>::getData(int idx) {
    if(length >= idx && head->next != NULL)
    {
        move(idx);
        return cur->value;
    }
    else
        return -1;
}

template<typename DataType>
void linklist<DataType>::remove(int idx) {
    if(0>=idx || length < idx)
        cout << "Illegal Operation in remove" << endl;
    else
    {
        struct node<DataType> * temp;
        move(idx);
        temp = cur;
        move(idx-1);
        cur->next = temp->next;
        delete temp;
        length --;
    }
}

template<typename DataType>
void linklist<DataType>::show() const {
    auto *p = head->next;
    if (p)
    {
    while(p)
    {
        cout << p->value << " ";
        p = p->next;
    }
    cout << endl;
    }
    else
    {
        cout << "Empty List" << endl;
    }
}

template<typename DataType>
void linklist<DataType>::insert(int idx, DataType data) {
    if(idx <= length && length > 0)
    {
        if(idx <= 0)
            cout << "Insertion in Head is prohibited" << endl;
        else
        {
            auto *temp = new struct node<DataType>;
            temp -> value = data;
            temp -> next = NULL;
            move(idx);
            temp -> next = cur -> next;
            cur -> next = temp;
            length ++;
        }
    }
    else
        cout << "Parameters Error in insert" << endl;
}

template<typename DataType>
void linklist<DataType>::modify(int idx, DataType data) {
    if (idx <= length && length > 0 )
    {
        move(idx);
        cur -> value = data;
    }
    else
    {
        cout << "Parameters Error" << endl;
    }
}
#endif //CODE_LINKLIST_H
