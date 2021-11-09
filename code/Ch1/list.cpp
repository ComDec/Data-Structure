//
// Created by 18113 on 2021/9/26.
//


# include <iostream>
# include "seqlist.h"
using namespace std;


int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    SeqList<int> list(a, 10);
    try {
        cout << list.Get(1) << endl; // O(1)
        cout << list.len() << endl; // O(1)
        list.Show();
        list.Insert(0, -1);
        list.Show();
        list.Delete(0);
        cout << list.len() << endl;
        list.Show();
        list.Delete(1);
        cout << list.len() << endl;
        list.Show();
        list.clear();
        SeqList<int> list(a, 7);
        list.Show();
        list.clear();
    }
    catch (const char *e)
    {
        cout << e << endl;
    }
    return 0;
}