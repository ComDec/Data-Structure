//
// Created by 18113 on 2021/11/19.
//

#ifndef CODE_BINARY_SEARCH_TREE_H
#define CODE_BINARY_SEARCH_TREE_H
using namespace std;

template<class DataType>
class Search2Tree
{
    typedef struct TreeNode{
        DataType val;
        TreeNode *left;
        TreeNode *right;
        int type = 0;
}TreeNode;

public:
    Search2Tree();
    ~Search2Tree();
    int NodeNumber();
    virtual void MidOrder(TreeNode *treeNode);
    virtual bool BSFind(TreeNode *treeNode, DataType x);
    virtual TreeNode* BSInsert(TreeNode*treeNode, DataType x);
    virtual TreeNode* BSDelete(TreeNode* treeNode, DataType x);
    TreeNode* CreateTree();

private:
    TreeNode *root;
    DataType Visit(TreeNode *treeNode);
    DataType BSFindMin(TreeNode *treeNode);
    TreeNode* BSRootDelete(TreeNode* treeNode);
    TreeNode * CreateNodes(DataType x);
    int nodes;

};

template<typename DataType>
Search2Tree<DataType>::Search2Tree() {
    nodes = -1;
    root = CreateNodes(-999);
    root->type = 1;
}

template<typename DataType>
DataType Search2Tree<DataType>::Visit(TreeNode *treeNode) {
    if (treeNode->type == 0)
        cout << treeNode->val << " ";
    return treeNode->val;
}

template<typename DataType>
int Search2Tree<DataType>::NodeNumber() {
    return nodes;
}
template<typename DataType>
void Search2Tree<DataType>::MidOrder(TreeNode *treeNode) {
    if (treeNode == NULL)
        return;
    MidOrder(treeNode->left);
    Visit(treeNode);
    MidOrder(treeNode->right);
}

template<typename DataType>
Search2Tree<DataType>::~Search2Tree<DataType>() {
}

template<typename DataType>
typename Search2Tree<DataType>::TreeNode * Search2Tree<DataType>::CreateNodes(DataType x) {
    auto node = new TreeNode;
    node->val = x;
    node->left = NULL;
    node->right = NULL;
    nodes += 1;
    return node;
}

template<typename DataType>
bool Search2Tree<DataType>::BSFind(TreeNode *treeNode, DataType x) {
    if (treeNode == NULL)
        return false;
    if (treeNode->val == x)
        return true;
    if (x < treeNode->val)
        BSFind(treeNode->left, x);
    else
        BSFind(treeNode->right, x);
}

template<typename DataType>
typename Search2Tree<DataType>::TreeNode* Search2Tree<DataType>::BSInsert(TreeNode *treeNode, DataType x) {

    if (treeNode == NULL) {
        treeNode = CreateNodes(x);
        return treeNode;
    }
    if (treeNode->val == x)
        return treeNode;
    if (x < treeNode->val)
        treeNode->left = BSInsert(treeNode->left, x);
    else
        treeNode->right = BSInsert(treeNode->right, x);
    return treeNode;
}

template<typename DataType>
typename Search2Tree<DataType>::TreeNode* Search2Tree<DataType>::CreateTree(){
    return root;
}

template<typename DataType>
DataType Search2Tree<DataType>::BSFindMin(TreeNode *treeNode) {
    // If left node is not empty
    if (treeNode -> left)
        // Try to utilize function BSFindMin, which will continue to step: treeNode = treeNode->left
        // Until there is no left node of this treeNode, which is the min one.
        return BSFindMin(treeNode->left);
    return treeNode->val;
}


template<typename DataType>
typename Search2Tree<DataType>:: TreeNode* Search2Tree<DataType>::BSDelete(TreeNode *treeNode, DataType x) {

    // If treeNode is NULL, we will return NULL which equals delete this node
    // That means we let treeNode.left or .right = NULL
    if (NULL == treeNode)
        return NULL;
    // If the value lies in the root node, we have to use a different strategy to delete
    // return new root node, which will be the value of treeNode.left or .right
    if (treeNode->val == x)
        return BSRootDelete(treeNode);

    // if the value is less than node's value, the value must exist in the node's left tree
    if (x < treeNode->val)
        treeNode->left = BSDelete(treeNode->left, x);
    else
        treeNode->right = BSDelete(treeNode->right, x);

    // We have to return a treeNode, nor we can't update treeNode.left or right
    return treeNode;
}

template<typename DataType>
typename Search2Tree<DataType>::TreeNode* Search2Tree<DataType>::BSRootDelete(TreeNode *treeNode) {
    TreeNode* tempNode;
    TreeNode* delNode;
    // if left node is empty, we let right node as the root node
    if (treeNode->left == NULL)
    {
        delNode = treeNode;
        tempNode = treeNode->right;
        delete delNode;
    }
    else if (treeNode->right == NULL)
    {
        delNode = treeNode;
        tempNode = treeNode->left;
        delete delNode;
    }
    // if two children nodes are existed
    else
    {
        tempNode->val = BSFindMin(treeNode->right);
        tempNode->left = treeNode->left;
        // BSDelete function will return the root node of the tree
        tempNode->right = BSDelete(treeNode->right, tempNode->val);
    }
    // return the new root node, which value equals the node we want to delete
    return tempNode;
}
#endif //CODE_BINARY_SEARCH_TREE_H