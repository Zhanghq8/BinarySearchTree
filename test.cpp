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
	root = BST.Insert(root, 20);
	root = BST.Insert(root, 10);
	root = BST.Insert(root, 34);
	root = BST.Insert(root, 15);
	root = BST.Insert(root, 23);
	root = BST.Insert(root, 30);
	root = BST.Insert(root, 18);
	int number;
	std::cout << "Enter the object you want to search: " << std::endl;
	std::cin >> number;
	std::cout << BST.Search(root, number) << std::endl;
	int min = BST.FindMin(root);
	int max = BST.FindMax(root);
	std::cout << "The minimum value in the tree is: " << min << std::endl;
	std::cout << "The maximum value in the tree is: " << max << std::endl;
	int height = BST.FindHeight(root);
	std::cout << "The height of the tree is: " << height << std::endl;
}