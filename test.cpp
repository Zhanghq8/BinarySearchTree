//*****************************************************************************
//  This source file contains the BinarySearchTree class test.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include <iostream>
#include "BinarySearchTree.h"

int main()
{

	BinarySearchTree BST;
	BSTNode* root = NULL;
	std::cout << root << std::endl;
	root = BST.Insert(root, 20);
	std::cout << root << std::endl;
	root = BST.Insert(root, 10);
	root = BST.Insert(root, 34);
	root = BST.Insert(root, 15);
	root = BST.Insert(root, 23);
	std::cout << root << std::endl;
	int number;
	std::cout << "Enter the object you want to search: " << std::endl;
	std::cin >> number;
	BST.Search(root, number);

}