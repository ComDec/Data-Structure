//
// Created by 18113 on 2021/9/27.
//
# include <iostream>

using namespace std;

// void指针代表不确定类型，即通用指针
void Void_Pointer() {
    void *pc;
    int i = 123;
    pc = &i;
    cout << pc << endl;
    // cout << *pc <<endl;
    // Error! 必须进行显式类型转换
    cout << *(int *) pc << endl;
}

// 内联函数，消除调用函数的系统开销，之间将函数内嵌到调用处。
// 以空间换时间的策略
inline double multi(double x) {
    return x * x;
}

// 带默认参数的函数，指定缺省值的变量必须在无缺省值变量的右边
void default_parameters(int i, int j = 1) {
    cout << i << endl;
    cout << j << endl;
}

// 函数重载
// 同一作用域内，函数的参数类型，个数不同即可允许不同的函数使用相同的函数名
// 作用域规则告诉我们一个变量的有效范围，它在哪儿创建，在哪儿销毁（也就是说超出了作用域）。
// 变量的有效作用域从它的定义点开始，到和定义变量之前最邻近的开括号配对的第一个闭括号。也就是说，作用域由变量所在的最近一对括号确定。

void reload_function(int i, int j)
{
    cout << "Sum of variances: " << i+j << endl;
}

void reload_function(double i, double j)
{
    cout << "Sum of variances: " << i+j << endl;
}
// 函数返回值不在检查范围内，两个函数仅有返回值类型不同则不允许重载
int reload_function(int i, int j, int k)
{
    cout << "Sum of variances: " << i+j+k << endl;
    return i+j+k;
}

// 局部变量会在作用域内屏蔽全局变量，若需要使用，则添加作用域标识符 ::
int field_x = 100;
void function_field(int field_x=10)
{
    cout << "Global X: " << ::field_x << endl;
    cout << "Local X: " << field_x << endl;

}

// 引用：变量的别名，与其所代表的变量共享同一内存地址
void Reference_Swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}
int Reference_A [] = {0 ,1, 2, 3};
int &index(int i)
{
    return Reference_A[i];
}
void Reference_Test()
{
    int a = 5, b = 10;
    cout << "Before Swap: " << a << b << endl;
    // 相当于： int &x = a 基于此就可以直接访问a的变量空间
    Reference_Swap(a, b);
    cout << "After Swap: " << a << b << endl;
    cout << "Index 2 : " << index(2) << endl;
    index(2) = 100;
    cout << "Modified Index 2 : " << index(2) << endl;

}
int main() {
    // This is a example for C++ learning

//    Void_Pointer();
//    cout << multi(3.0) << endl;
//    default_parameters(1);
//    default_parameters(1, 2);
//    reload_function(1, 2);
//    reload_function(1.1, 2.2);
//    cout << reload_function(1, 2, 3) << endl;
//    function_field();


    Reference_Test();
    return 0;
}