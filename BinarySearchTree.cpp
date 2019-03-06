//*****************************************************************************
//  This source file contains the BinarySearchTree class definitions.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{

}


// int BinarySearchTree::countNode()
// {
// 	int count = 0;
// 	Node* temp = head;
// 	while (temp != NULL)
// 	{
// 		temp = temp->next;
// 		count++;
// 	}
// 	return count;
// }

BSTNode* BinarySearchTree::CreateRoot()
{

}

BSTNode* BinarySearchTree::CreateNewNode(int data)
{
	BSTNode* newNode = new BSTNode();
	newNode-> data = data;
	newNode-> left = NULL;
	newNode-> right = NULL;
	return newNode;
}

    //insert BSTNode
BSTNode* BinarySearchTree::Insert(BSTNode* rootPtr, int data)
{
	if (rootPtr == NULL)
	{
		rootPtr = CreateNewNode(data);
	}
	else if (data <= rootPtr-> data)
	{
		rootPtr->left = BinarySearchTree::Insert(rootPtr-> left, data);
	}
	else
	{
		rootPtr->right = BinarySearchTree::Insert(rootPtr-> right, data);
	}
	return rootPtr;
}

    //search BSTNode
bool BinarySearchTree::Search(BSTNode* rootPtr, int data)
{
	if (rootPtr == NULL)
	{
		return false;
	}
	else if (rootPtr-> data == data)
	{
		std::cout << "Found the object." << std::endl;
		return true;
	}
	else if (data <= rootPtr->data)
	{
		bool leftresult = BinarySearchTree::Search(rootPtr-> left, data);
		return leftresult;
	}
	else 
	{
		bool rightresult = BinarySearchTree::Search(rootPtr-> right, data);
		return rightresult;
	}
}

BinarySearchTree::~BinarySearchTree()
{

}
