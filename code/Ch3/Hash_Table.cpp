//
// Created by 18113 on 2021/10/25.
//

// 哈希： 将查找的数字通过函数映射找到存储数据的位置的过程

// 基本概念： 1) 关键字：查找的数据
//          2) 哈希函数：将关键字映射成哈希值
//          3) 冲突解决：处理生成哈希值的过程中的冲突
//          4) 哈希地址：存储数据的位置
//          5) 哈希表：存储这些数据的位置

/*  哈希表的底层是数组，称为哈希数组
 *  哈希函数：直接定位法，除留余数法，数字分析法，平方取中法，折叠法，随机数法
 *  哈希冲突解决方案：开放定址法，再散列函数法，链地址法，公共溢出区法
 */

#include <iostream>
#include "Hash.h"

using namespace std;

int main()
{
    Hash<int> Hash_a;
    int addr;
    for ( int i=500; i<5000; i+=30)
        Hash_a.HashInsert(i);
    for ( int i=500; i<5000; i+=30)
    {
        Hash_a.SearchKey(i, &addr);
        cout <<"Addr: " << addr << " with ele: " << Hash_a.GetEle(addr) << endl;
    }

}

