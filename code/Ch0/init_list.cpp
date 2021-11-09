//
// Created by 18113 on 2021/9/18.
//
#include <iostream>
using namespace std;

class A{
private:
    int i;
    int j;
    // p需要初始化, 通过初始化列表使用变量初始化
    int *p;
public:
//    A(){
//        p = 0;
//        cout << "Init Class A" << endl;
//    }
    A(int x, int y):p(0), i(x), j(y){
        cout << "Init Class A" << endl;
        cout << "i: " << i << endl;
        cout << "j: " << j << endl;
}
    ~A(){
        if (p)
            delete p;
        cout << "Delete Class A" <<endl;
    }

};

int main()
{
    A a1(2,2);
    return 0;
}
