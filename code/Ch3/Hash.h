//
// Created by 18113 on 2021/10/25.
//

// 哈希函数：除留余数法
// 冲突解决：开放寻址法

#ifndef CODE_HASH_H
#define CODE_HASH_H

# include <iostream>
using namespace std;

template<class DataType>
class Hash
{
private:

    int MaxLength = 500;
    DataType NULLKEY = 999999999;
    DataType *HashTable = new DataType[MaxLength];

public:

    Hash();
    ~Hash();
    int GetAddr(DataType key);
    DataType SearchKey(DataType key, int *addr);
    int HashInsert(DataType key);
    DataType GetEle(int addr);
    int HashRemove(DataType key);

};

template<typename DataType>
Hash<DataType>::Hash()
{
    for (int i=0; i<MaxLength; ++i)
        HashTable[i] = NULLKEY;
}

template<typename DataType>
Hash<DataType>::~Hash()
{
    delete [] HashTable;
}

template<typename DataType>
int Hash<DataType>::GetAddr(DataType key) {
    return key % MaxLength;
}

template<typename DataType>
DataType Hash<DataType>::SearchKey(DataType key, int *addr) {
    int startaddr = GetAddr(key);
    *addr = startaddr;
    while(HashTable[*addr] != key)
    {
        *addr = GetAddr(*addr + 1); // 通过开放寻址法寻找下一个位置
        if (HashTable[*addr] == NULLKEY) // 找到空位，说明没有对应数据
            return 0;
        if (*addr == startaddr)  // 遍历完成整个哈希表
            return 0;
    }
    return 1;
}

template<typename DataType>
int Hash<DataType>::HashInsert(DataType key) {
    int addr = GetAddr(key);
    int retaddr;
    if (SearchKey(key, &retaddr))
        return retaddr;
    while(HashTable[addr] != NULLKEY)
        addr = GetAddr(addr + 1);
    HashTable[addr] = key;
    return addr;
}

template<typename DataType>
DataType Hash<DataType>::GetEle(int addr) {
    return HashTable[addr];
}

template<typename DataType>
int Hash<DataType>::HashRemove(DataType key) {
    int addr;
    if (!SearchKey(key, &addr))
        return NULLKEY;
    HashTable[addr] == NULLKEY;
    return addr;
}
#endif //CODE_HASH_H
