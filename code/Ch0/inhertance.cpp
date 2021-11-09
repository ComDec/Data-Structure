//
// Created by 18113 on 2021/9/22.
//

#include <iostream>

using namespace std;

class A{
public:
    A(int ii):i(ii) {cout << "A::A()" <<endl;} //后续B需要自己定义构造函数
    ~A() {cout << "A::~A()" << endl;}
    void print() {cout << "A::print() i gets " << i << endl; }\
    void print(int ii) {cout << i << endl; print();}
    void set(int ii) {i = ii;}

private:
    int i;

protected:
    void p_set(int ii) {i = ii;}

};

class B: public A{
public:
    // 在无需参数时，可以使用默认缺省的析构、构造函数
    B() : A(15) {cout << "B::B()" << endl;}
    // 出现同名函数，只调用子类的函数
    void print() {cout << "B::print()" <<endl;}
    ~B() {cout << "B::~B()" << endl;}
    void f(){
        set(20);
        print();
        //调用private是否可行？
        // i = 30;
    }
};

int main()
{
    B b;
    b.print();
//    b.print();
//    b.set(10);
//    b.print();
//    b.f();
//    b.p_set(10);
    return 0;
}