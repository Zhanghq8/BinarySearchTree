//*****************************************************************************
//  This header file contains the Quene class declarations.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#ifndef Quene_h
#define Quene_h

#include <iostream>
#include <string>
#include "BinarySearchTree.h"

struct Node
{
    BSTNode* data;
    Node* link;
};


class Quene_linkedlist
{

private:
    Node* Quenefront;
    Node* Quenerear;

public:
    Quene_linkedlist();
    int countQuene();
    bool Enquene(BSTNode* data);
    bool Dequene();
    BSTNode* Front();
    bool isEmpty();
    bool displayQuene();
    ~Quene_linkedlist();
};


#endif