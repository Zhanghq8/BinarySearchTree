//*****************************************************************************
//  This source file contains the BinarySearchTree class definitions.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include "BinarySearchTree.h"
#include "Quene.h"

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

int BinarySearchTree::FindMin(BSTNode* rootPtr)
{
	if (rootPtr == NULL)
	{
		std::cout << "Error: The tree is empty." << std::endl;
	}
	else if (rootPtr-> left == NULL)
	{
		int min = rootPtr-> data;
		return min;
	}
	return BinarySearchTree::FindMin(rootPtr-> left);
}

int BinarySearchTree::FindMax(BSTNode* rootPtr)
{
	if (rootPtr == NULL)
	{
		std::cout << "Error: The tree is empty." << std::endl;
	}
	else if (rootPtr-> right == NULL)
	{
		int max = rootPtr-> data;
		return max;
	}
	return BinarySearchTree::FindMax(rootPtr-> right);
}

int BinarySearchTree::FindHeight(BSTNode* rootPtr)
{
	int height = -1;
	if (rootPtr == NULL)
	{
		return height;
	}
	else
	{
		int leftHeight = BinarySearchTree::FindHeight(rootPtr-> left);
		int rightHeight = BinarySearchTree::FindHeight(rootPtr-> right);
		
		if (BinarySearchTree::FindHeight(rootPtr-> left) > BinarySearchTree::FindHeight(rootPtr-> right))
		{
			height = BinarySearchTree::FindHeight(rootPtr-> left) + 1;
		}
		else
		{
			height = BinarySearchTree::FindHeight(rootPtr-> right) + 1;
		}
	}
	return height;
}

bool BinarySearchTree::displayBF(BSTNode* rootPtr)
{
	if (rootPtr == NULL)
	{
		std::cout << "Error: The tree is empty." << std::endl;
		return false;
	}
	Quene_linkedlist quene;
	quene.Enquene(rootPtr);
	while(!quene.isEmpty())
	{
		BSTNode* current = quene.Front();
		std::cout << current-> data << " ";
		if (current-> left != NULL)
		{
			quene.Enquene(current->left);
		}
		if (current-> right != NULL)
		{
			quene.Enquene(current->right);
		}
		quene.Dequene();
	}
	std::cout << "" << std::endl;
	return true;
}


BinarySearchTree::~BinarySearchTree()
{

}
