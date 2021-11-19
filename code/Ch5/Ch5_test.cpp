//
// Created by 18113 on 2021/11/9.
//

#include <iostream>
#include "priority_queue.h"
#include "Binary_Search_Tree.h"

using namespace std;

int main()
{
//    priority_queue<int> a(2);
//    a.enQueue(1);
//    a.enQueue(36);
//    a.enQueue(45);
//    a.enQueue(332);
//    a.enQueue(53);
//    a.enQueue(62);
//    a.enQueue(71);
//    a.transver();
//    a.deQueue();
//    a.transver();

    Search2Tree<int> a;
    a.BSInsert(a.root, 2);
    a.BSInsert(a.root, 3);
    a.BSInsert(a.root, 5);
    a.BSInsert(a.root, 4);
    a.MidOrder(a.root);
    a.BSDelete(a.root, 5);
    cout << endl;
    a.MidOrder(a.root);
    cout << endl;
    cout << a.NodeNumber() << endl;


    return 0;
}