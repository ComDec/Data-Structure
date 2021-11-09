//
// Created by 18113 on 2021/9/17.
//
# include <iostream>
using namespace std;

// 构造函数：在类创建新对象时时运行的函数
class Line
{
   public:
      void setLength( double len );
      double getLength();
      Line(double len);  // 这是构造函数,负责初始化对象的数据成员
      ~Line(); // 析构函数

/*
 * 拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。拷贝构造函数通常用于：

    构造函数的使用情况：

    一个对象以值传递的方式传入函数体
    一个对象以值传递的方式从函数体返回
    一个对象需要通过另一个对象进行初始化

    Syntax:

    classname (const classname &obj) {
        构造函数的主体
    }

    !: 如果在类中没有定义拷贝构造函数，编译器会自行定义一个。如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数。

 * */

   private:
      double length;
};

//// 成员函数定义，包括构造函数
Line::Line( double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}

Line::~Line() {
    cout << "Object is being deleted" << endl;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength()
{
    return length;
}

int main()
{
    Line line(10.0);

    // 获取默认设置的长度
    cout << "Length of line : " << line.getLength() <<endl;
    // 再次设置长度
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() <<endl;

    return 0;
}