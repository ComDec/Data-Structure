//
// Created by 18113 on 2021/9/17.
//
# include <iostream>
using namespace std;

class Box
{
public:
    // 公有成员变量，可以在外部任意访问和修改
    double length = 0.0;
    double width = 0.0;
    double height = 0.0;
    // 成员函数声明
    double get(string type);
    void set(double len, double width, double hei);
    double volume();
    double get_private_length();
    void set_private_length(double len);

private:
    double private_length = 1.0;

protected:
    double protected_length = 5.0;

};

class SmallBox:Box // SmallBox 是派生类
{
public:
    void setSmallWidth( double wid );
    double getSmallWidth();
};

//除此之外类的继承分为三类：
/*
有public, protected, private三种继承方式，它们相应地改变了基类成员的访问属性。

1.public 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：public, protected, private

2.protected 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：protected, protected, private

3.private 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：private, private, private

但无论哪种继承方式，上面两点都没有改变：

1.private 成员只能被本类成员（类内）和友元访问，不能被派生类访问；

2.protected 成员可以被派生类访问。
 */

// 子类的成员函数
double SmallBox::getSmallWidth()
{
    return width ;
}
void SmallBox::setSmallWidth( double wid )
{
    width = wid;
}


// 除此之外，函数还可以作为类的成员被定义，其可以访问类中所有变量
double Box::get(string type) {
          if (type == "length")
              return length;
          else if (type == "width")
              return width;
          else if (type == "height")
              return height;
          else
          {
              cout << "type error" << endl;
              return 0;
          };
};
void Box::set( double len, double bre, double hei)
{
    length = len;
    width = bre;
    height = hei;
}
double Box::volume()
{
    return length * width * height;
};
void Box::set_private_length(double len)
{
    private_length = len;
}
double Box::get_private_length()
{
    return private_length;
}

int main()
{
    Box box1;
    SmallBox smallbox1;

    double volume = 0.0;

    cout << "Public length: " << box1.length << endl;

    //从外部修改变量的值
    box1.length = 5.0;
    box1.width = 2.0;
    box1.height = 1.0;

    smallbox1.setSmallWidth(2.0);

    cout << "Protected width from small box: " << smallbox1.getSmallWidth() << endl;

    cout << "Private length: " << box1.get_private_length() << endl;

    box1.set_private_length(2.0);

    cout << "Change Private length: " <<  box1.get_private_length() << endl;

    cout << "Volume: " << box1.volume() << endl;

    return 0;
}