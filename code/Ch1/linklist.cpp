//
// Created by 18113 on 2021/10/8.
//
#include "linklist.h"
using namespace std;

int main()
{
    void *p;
    linklist<int> list;
    list.add(1);
    list.add(2);
    list.add(3);
    cout << "Total Length: " << list.getLen() << endl;
    cout << list.getData(0) << endl;
    list.show();
    list.insert(1, 100);
    list.show();
    list.remove(2);
    list.show();
    list.modify(1, 200);
    list.show();
    return 0;
}