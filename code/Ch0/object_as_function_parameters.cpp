//
// Created by 18113 on 2021/9/27.
//
#include <iostream>
using namespace std;

class Point{
public:
    int x;
    int y;
    Point(int x1, int y1) : x(x1), y(y1)  //成员初始化列表
    { }
    int getDistance()
    {
        return x * x + y * y;
    }
    int getDistance_Private()
    {
        return p_x * p_x + p_y * p_y;
    }
    void change_private(int a, int b)
    {
        p_x = a;
        p_y = b;
    }
private:
    int p_x;
    int p_y;

};

void changePoint1(Point point)    //使用对象作为函数参数
{
    point.x += 1;
    point.y -= 1;
}

void changePoint2(Point *point)   //使用对象指针作为函数参数
{
    point->x += 1;
    point->y -= 1;
}

void changePoint3(Point &point)  //使用对象引用作为函数参数
{
    point.x += 1;
    point.y -= 1;
}

void changePoint4(Point &point)  //使用对象引用作为函数参数
{
    point.change_private(1 , 1);
}


int main()
{
    Point point[4] = {Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4)};
    Point *p = point;
    changePoint1(point[0]);
    cout << "the distance is " << point[0].getDistance() << endl;
    p++;
    changePoint2(p);
    cout << "the distance is " << point[1].getDistance() << endl;
    changePoint3(point[2]);
    cout << "the distance is " << point[2].getDistance() << endl;
    changePoint4(point[3]);
    cout << "the distance is " << point[3].getDistance() << endl;
    cout << "the distance from private is " << point[3].getDistance_Private() << endl;
    return 0;
}

