//
// Created by 18113 on 2021/10/13.
//
#include<iostream>
#include "seq_stack.h"
#include "link_stack.h"

using namespace std;

int main()
{
    SeqStack<int> a;
    a.push(1);
    a.push(2);
    cout << "len: " << a.len() << endl;
    cout << "top ele: " << a.gettop() << endl;
    a.pop();
    cout << "top ele: " << a.gettop() << endl;
    a.clean();
    cout << "Is empty? " << a.isEmpty() << endl;

    LinkStack<int> b;
    b.push(1);
    b.push(2);
    cout << "top ele: " << b.gettop() << endl;
    b.pop();
    cout << "top ele: " << b.gettop() << endl;
    cout << "cur length: " << b.len() << endl;
    cout << "Is empty? " << b.isEmpty() << endl;
    b.clean();
    cout << "Is empty? " << b.isEmpty() << endl;
    return 0;
}