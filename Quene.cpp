//*****************************************************************************
//  This source file contains the Quene class definitions.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include "Quene.h"

// Linkedlist based Quene

Quene_linkedlist::Quene_linkedlist()
{
	Quenefront = NULL;
	Quenerear = NULL;
}

int Quene_linkedlist::countQuene()
{
	int count = 0;
	Node* temp = Quenefront;
	while (temp != NULL)
	{
		temp = temp->link;
		count++;
	}
	return count;
}


bool Quene_linkedlist::Enquene(BSTNode* data)
{
	Node* temp = new Node();
	temp-> data = data;
	temp-> link = NULL;
	if (Quenefront == NULL && Quenerear == NULL)
	{
		Quenefront = Quenerear = temp;
		return true;
	}
	else
	{
		Quenerear-> link = temp;
		Quenerear = temp;
	}
}

bool Quene_linkedlist::Dequene()
{
	Node* temp = Quenefront;
	if (Quenefront == NULL)
	{
		std::cout << "The Quene is empty!" << std::endl;
		return false;
	}
	if (Quenefront == Quenerear)
	{
		Quenefront = Quenerear = NULL;
	}
	else
	{
		Quenefront = Quenefront-> link;
		delete(temp);
		return true;
	}
}

BSTNode* Quene_linkedlist::Front()
{
	int count = countQuene();
	if (count == 0)
	{
		std::cout << "The Quene is empty." << std::endl;
	}
	else
	{
		Node* temp = Quenefront;
		return temp->data;
	}
}

bool Quene_linkedlist::isEmpty()
{
	if (Quenefront == NULL && Quenerear == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Quene_linkedlist::displayQuene()
{
	if (Quenefront == NULL && Quenerear == NULL)
	{
		std::cout << "The Quene is empty." << std::endl;
		return false;
	}
	else
	{
		Node* temp = Quenefront;
		while (temp != NULL)
		{
			std::cout << temp->data << " ";
			temp = temp->link;
		}
		std::cout << "" << std::endl;
		return true;
	}
}

Quene_linkedlist::~Quene_linkedlist()
{

}