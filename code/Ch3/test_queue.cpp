//
// Created by 18113 on 2021/10/15.
//

#include <iostream>
#include "seq_queue.h"
#include "link_queue.h"
using namespace std;

int main()
{
    seq_queue<int> a;
    cout << "Test of Seq Queue" << endl;
    a.enter(1);
    a.enter(2);
    a.enter(3);
    cout << "Size: " << a.getsize() << endl;
    cout << "Head ele: " << a.getele() << endl;
    a.leave();
    cout << "Head ele: " << a.getele() << endl;
    cout << "Is empty? " << a.isEmpty() << endl;
    a.empty();
    cout << "Is empty? " << a.isEmpty() << endl;
    cout << "Size: " << a.getsize() << endl;
    cout << "Head ele: " << a.getele() << endl;

    link_seq<int> b;
    cout << "Test of Link Queue" << endl;
    b.enter(1);
    b.enter(2);
    cout << "Head ele: " << b.getele() << endl;
    b.leave();
    cout << "Head ele: " << b.getele() << endl;
    b.enter(3);
    cout << "Size: "<< b.getsize() << endl;
    cout << "Is empty? " << b.isEmpty() << endl;
    b.empty();
    cout << "Is empty? " << b.isEmpty() << endl;
    cout << "Head ele: " << b.getele() << endl;


}