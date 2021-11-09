//
// Created by 18113 on 2021/9/17.
//
#include <iostream>

using namespace std;

class Line
{
public:
    int getLength( void );
    Line( int len );             // 简单的构造函数
    Line( const Line &obj);      // 拷贝构造函数
    ~Line();                     // 析构函数

private:
    int *ptr;
};

// 成员函数定义，包括构造函数
Line::Line(int len)
{
    cout << "Construe Function" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    //"调用拷贝构造函数并为指针 ptr 分配内存"
    cout << "allocate space for ptr via copy function" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}

Line::~Line(void)
{
    cout << "Release cache" << endl;
    delete ptr;
}
int Line::getLength( void )
{
    return *ptr;
}

void display(Line obj)
{
    cout << "line size: " << obj.getLength() <<endl;
}

// 程序的主函数
int main( )
{
    Line line1(10);

    Line line2 = line1; // 这里也调用了拷贝构造函数

    display(line1);
    display(line2);

    return 0;
}