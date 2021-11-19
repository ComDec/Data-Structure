//
// Created by 18113 on 2021/10/25.
// Under Developing...
//

#ifndef CODE_NORMAL_TREE_H
#define CODE_NORMAL_TREE_H

#include <iostream>

using namespace std;

template<class DataType>
class BinaryTree
{
public:
    BinaryTree();
    ~BinaryTree();
    DataType AddNodes(DataType x);
    DataType DeleteNodes();
    void EraseTree();
    void VLR(); //pre-nodes travel
    void LDR(); //mid-nodes travel
    void LRD(); //late-nodes travel

private:
    struct nodes
    {
        DataType data;
        int left;
        int right;
        int type;
    };
    struct nodes *Tree;
    int currentLength = 0;
};

template<typename DataType>
BinaryTree<DataType>::BinaryTree() {
    Tree = new struct nodes[100];
    for(int i=0; i<100; i++)
    {
        Tree[i].type = -1;
    }
}

#endif //CODE_NORMAL_TREE_H
