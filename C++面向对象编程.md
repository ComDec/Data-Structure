# C++面向对象编程

### 成员函数和成员变量

```c++
class A
{
    //类的声明，变量被称为字段。成员函数可以任意调用成员变量；
  private:
    int i;
  public:
    void f();
};

// ！: 函数是属于类的，变量是属于类的对象的
// 每个函数都存在隐藏参数 this
void A::f()
{
    i = 20; //相当于：this->i =20
    printf("&i=%p\n", &i);
  	printf("&this=%p\n", &this);
};

int main()
{
    A a;
    a.f(); //相当于 A::f(&a)
}
```

### 构造和析构函数

```c++
class Point{
    public:
    Point();
    ~Point();
    
    private:
    int x;
    int y;
};

Point::Point(int init) //允许参数传递
{
   	x,y = init;
    printf("Init x y as: %d %d\n",&x, &y);
}

Point::~Point() //无参数变量
{
    printf("Delete Class");
}

int main()
{
    Point a(5); //同时会调用： a.Point();
    return 0;
}
```

### 动态内存分配

```c++
int *p = new int;
int *a = new int[10];
Student *q = new Student();
Student *r = new Student[10];

delete p;
delete [] a;
delete q;
delete r;
delete [] r;
```

### 继承

允许成员变量，函数和interface(Public变量)的设计继承。

```c++
#include <iostream>

using namespace std;

class A{
public:
    A():i(0) {cout << "A::A()" <<endl;}
    ~A() {cout << "A::~A()" << endl;}
    void print() {cout << "A::f() i gets " << i << endl; }
    void set(int ii) {i = ii;}

private:
    int i;

protected:
    void p_set(int ii) {i = ii;}

};

class B: public A{
public:
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
//    b.print();
//    b.set(10);
//    b.print();
    b.f();
//    b.p_set(10);
    return 0;
}
```

