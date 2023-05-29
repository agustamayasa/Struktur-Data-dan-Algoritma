#include<iostream>
using namespace std;

class Node{
	public:
		int val;
		
		Node *left;
		Node *right;
		
	Node(){
		left = right = NULL;
	}
};

class BinaryTree{
	
	public:
		void insertNode(int);
		Node *insertNodeRecursive(Node*, int);
		
		void searchNode(int);
		Node *searchNodeRecursive(Node*, int);
		
		void preOrder();
		void preOrderRecursive(Node*);
		void inOrder();
		void inOrderRecursive(Node*);
		void postOrder();
		void postOrderRecursive(Node*);

		Node *findMin();
		Node *findMinRecursive(Node*);
		Node *findMax();
		Node *findMaxRecursive(Node*);
		
		void deleteNode(int);

		
		Node *root;
		
	BinaryTree(){
		root = NULL;
	}
		
};