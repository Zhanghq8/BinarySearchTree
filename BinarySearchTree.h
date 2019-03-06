//*****************************************************************************
//  This header file contains the BinarySearchTree class declarations.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include <iostream>
#include <string>

struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
};

class BinarySearchTree
{
private:
    BSTNode* root;
    
public:
    
    //constructor
    BinarySearchTree();

    // //returns the number of node in current tree
    // int countBSTNode();

    //create BSTNode
    BSTNode* CreateNewNode(int data);

    //insert BSTNode
    BSTNode* Insert(BSTNode* rootPtr, int data);

    //search BSTNode
    bool Search(BSTNode* rootPtr, int data);

    //find min value in the tree
    int FindMin(BSTNode* rootPtr);

    //find max value in the tree
    int FindMax(BSTNode* rootPtr);

    //find height of the tree
    int FindHeight(struct BSTNode *rootPtr);

    //display the tree use breath-first algorithm
    bool displayBF(BSTNode* rootPtr); 

    
    //deconstructor
    ~BinarySearchTree();
};

#endif