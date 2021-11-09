//
// Created by 18113 on 2021/11/9.
//

#include <iostream>
#include "priority_queue.h"

using namespace std;

int main()
{
    priority_queue<int> a(2);
    a.enQueue(1);
    a.enQueue(36);
    a.enQueue(45);
    a.enQueue(332);
    a.enQueue(53);
    a.enQueue(62);
    a.enQueue(71);
    a.transver();
    a.deQueue();
    a.transver();
    return 0;
}