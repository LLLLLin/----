#ifndef LINK_BINARY_TREE_H
#define LINK_BINARY_TREE_H
#include<iostream>
#include<string>
#include<stack>
using namespace std;

typedef  struct BTNode{
	string  objects;
	BTNode* lchild;
	BTNode* rchild;

}BTNode,*BTree; 
typedef struct StackType{
	BTree T;
	int flag;

};
void init(BTree& T);

void preTraversal(BTree& T);
void PreTraversal(BTree& T);
void InoderTraversal(BTree& T);
void inoderTraversal(BTree& T);
void PosTraversal(BTree& T);
void posTraversal(BTree& T);
#endif