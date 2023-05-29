#include<iostream>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insertNode(int insertVal){
	root = insertNodeRecursive(root, insertVal);
}

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertValue){
	if (currentRoot == NULL){
		currentRoot = new Node();
		currentRoot->val = insertValue;
		return currentRoot;
	}
	
	if(insertValue < currentRoot->val){
		currentRoot->left = insertNodeRecursive(currentRoot->left, insertValue);
	}
	
	else if(insertValue > currentRoot->val){
		currentRoot->right = insertNodeRecursive(currentRoot->right, insertValue);
	}
	return currentRoot;
}

void BinaryTree::inOrder(){
	inOrderRecursive(root);
}

void BinaryTree::inOrderRecursive(Node* currentRoot){
	if(currentRoot != NULL){
		inOrderRecursive(currentRoot->left);
		cout<<currentRoot->val<<", ";
		inOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::preOrder(){
	preOrderRecursive(root);
}

void BinaryTree::preOrderRecursive(Node* currentRoot){
	if(currentRoot != NULL){
		cout<<currentRoot->val<<", ";
		preOrderRecursive(currentRoot->left);
		preOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::postOrder(){
	postOrderRecursive(root);
}

void BinaryTree::postOrderRecursive(Node* currentRoot){
	if(currentRoot != NULL){
		postOrderRecursive(currentRoot->left);
		postOrderRecursive(currentRoot->right);
		cout<<currentRoot->val<<", ";
	}
}

Node *BinaryTree::findMin(){
	return findMinRecursive(root);
}

Node *BinaryTree::findMinRecursive(Node* currentRoot){
	if (currentRoot == NULL){
		cout<<"Root adalah null atau Binary Tree Kosong\n";
    }
    else if(currentRoot->left != NULL){
    	findMinRecursive(currentRoot->left);
	}
	else{
		cout<<"Nilai Minimum pada Binary Tree : " <<currentRoot->val<<"\n";
    }
    return currentRoot;
}

Node *BinaryTree::findMax(){
	return findMaxRecursive(root);
}

Node *BinaryTree::findMaxRecursive(Node* currentRoot){
	if (currentRoot == NULL){
		cout<<"Root adalah null atau Binary Tree Kosong\n";
	}
	else if (currentRoot->right != NULL){
		findMaxRecursive(currentRoot->right);
	}
	else {
		cout<<"Nilai Maximum pada Binary Tree : "<<currentRoot->val<<"\n";
	}
	return currentRoot;
}

void BinaryTree::searchNode(int value){
	searchNodeRecursive(root, value);
}

Node* BinaryTree::searchNodeRecursive(Node* currentRoot, int insertVal){
	if(currentRoot == NULL){
		cout<<"Binary Tree masih kosong\n";
	}
	else if(currentRoot->val == insertVal){
		cout<<"Node dengan nilai "<<insertVal<<" ditemukan\n";
		return currentRoot;
	}
	else if (insertVal < currentRoot->val && currentRoot->left != NULL){
		return searchNodeRecursive(currentRoot->left, insertVal);
	}
	else if (insertVal > currentRoot->val && currentRoot->right != NULL){
		return searchNodeRecursive(currentRoot->right, insertVal);
	}
	else {
		cout<<"Node dengan nilai "<<insertVal<<" Tidak ditemukan\n";
	}
	return currentRoot;
}
