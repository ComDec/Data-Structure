//
// Created by 18113 on 2021/11/23.
//
# include "Binary_Search_Tree.h"

// This is not a complete version of AVL Tree, Find, Insert and Delete functions are not included.
// If you are willing to do that, make sure after Insert and Delete, return AVLBalance(node) but not node plainly.

#ifndef CODE_AVL_TREE_H
#define CODE_AVL_TREE_H

template<class DataType>
class AVL_Tree
{

private:

    typedef struct Data{
        DataType value;
        int key;
    }Data;

    typedef struct TreeNode{
        Data val;
        int height;
        TreeNode* left;
        TreeNode* right;
    }TreeNode;

    TreeNode * root;

    int AVLGetHeight(TreeNode* node);
    void AVLCalcHeight(TreeNode* node);
    int AVLGetBalance(TreeNode* node);
    int Max(int a, int b);
    void RightRotate(TreeNode* node);
    void LeftRotate(TreeNode* node);
    void LRRotate(TreeNode* node);
    void RLRotate(TreeNode* node);
    TreeNode* AVLBalance(TreeNode* node);



public:
    AVL_Tree();
    ~AVL_Tree();

};

template<typename DataType>
AVL_Tree<DataType>::AVL_Tree() {
    root = new TreeNode;
    root->height = 0;
}

template<typename DataType>
AVL_Tree<DataType>::~AVL_Tree() {
    delete root;
}

template<typename DataType>
void AVL_Tree<DataType>::RightRotate(TreeNode *node) {
    // Tackle for LL tree
    // auto temp as node's left child
    auto temp = node->left;
    // change node's left child as temp's right child
    node->left = temp->right;
    // change the father-child relationship of temp and node
    temp->right = node;

    // The Height of child tree has been changed, so cal again.
    AVLCalcHeight(node);
    AVLCalcHeight(temp);
    return temp;
}

template<typename DataType>
void AVL_Tree<DataType>::LeftRotate(TreeNode *node) {
    // Design for RR tree
    auto temp = node->right;
    node->left = temp->left;
    temp->left = node;

    AVLCalcHeight(node);
    AVLCalcHeight(temp);
    return temp;
}

template<typename DataType>
void AVL_Tree<DataType>::LRRotate(TreeNode *node) {
    node->left = LeftRotate(node->left);
    return RightRotate(node);
}

template<typename DataType>
void AVL_Tree<DataType>::RLRotate(TreeNode *node) {
    node->right = RightRotate(node->right);
    return LeftRotate(node);
}

template<typename DataType>
int AVL_Tree<DataType>::Max(int a, int b) {
    return a>b? a:b;
}

template<typename DataType>
int AVL_Tree<DataType>::AVLGetHeight(TreeNode *node) {
    return node->height;
}

template<typename DataType>
void AVL_Tree<DataType>::AVLCalcHeight(TreeNode *node) {

    if (NULL == node)
        return;

    node->height = 1+Max(AVLGetHeight(node->left), AVLGetHeight(node->right));
}

template<typename DataType>
int AVL_Tree<DataType>::AVLGetBalance(TreeNode *node) {
    if (NULL==node)
        return 0;
    return AVLGetHeight(node->left) - AVLGetHeight(node->right);
}

template<typename DataType>
typename AVL_Tree<DataType>::TreeNode* AVL_Tree<DataType>::AVLBalance(TreeNode *node) {
    int bf = AVLGetBalance(node);
    // bf greater than +1, that's LL or LR tree
    if (bf > +1){
        // LL tree
        if (AVLGetBalance(node->left) > 0)
            node = RightRotate(node);
        // LR tree
        else
            node = LRRotate(node);
    }
    // situation for RR or RL tree
    else if (bf < -1){
        // RL tree
        if (AVLGetBalance(node->right) > 0)
            node = RLRotate(node);
        // RR tree
        else
            node = LeftRotate(node);
    }
    AVLCalcHeight(node);
    return node;
}
#endif //CODE_AVL_TREE_H

