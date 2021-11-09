//
// Created by 18113 on 2021/9/18.
//


int main()
{
    int *psome = new int [100];
    delete [] psome; //多个空间被删除，调用了多次析构
    return 0;
}
