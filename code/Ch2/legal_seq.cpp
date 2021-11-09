//
// Created by 18113 on 2021/10/12.
//

#include <bits/stdc++.h>
#include "seq_stack.h"
using namespace std;

int main()
{
    int n, count;
    int i;
    SeqStack <int> array;
    int b[] = {5,4,3,1,2,5};
    n = 6;
    count = 0;
    cout << "Seq to be check" << endl;
    for(int j=0; j<n; ++j)
        cout << b[j] << " ";
    cout << endl;
    for (i=1; i<=n; ++i)
    {
        array.push(i);
        cout << "P " ;
        while(array.gettop() == b[count])
        {
            count++;
            //cout << array.gettop() << " :a.top" << endl;
            array.pop();
            cout << "Q ";

            if (array.len() == 0)
                break;
        }
    }
    cout << endl;
    if (array.len() == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}