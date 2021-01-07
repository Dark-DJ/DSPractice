#include<iostream>
class Tree;
class TreeNode{
    TreeNode *parent;   
    TreeNode *child;

    int data1;            
    double data2;
    friend class Tree;    
};
class Tree{
    TreeNode *root;        
};
