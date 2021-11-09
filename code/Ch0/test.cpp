//
// Created by 18113 on 2021/9/17.
//
# include<stdio.h>

class Point{
public:
    Point(int init);
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
    printf("Delete Obj");
}

int main()
{
    Point a(5); //同时会调用： a.Point();
    return 0;
}