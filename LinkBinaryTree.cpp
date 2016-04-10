#include"LinkBinaryTree.h"
void init(BTree& T)
{

	string x;
	cin >> x;
	if (x =="a")
	{
		T = NULL;
	}
	else
	{
		T = new BTNode();
		T->objects = x;
		init(T->lchild);
		init(T->rchild);
	}
}
void preTraversal(BTree &T)
{
	stack<BTree> s;
	BTNode *p = T;
	while (!(p == NULL&&s.empty()))
	{
		while(p != NULL)
		{
			cout << p->objects ;
			s.push(p);
			p = p->lchild;
		}
		if (!s.empty())
		{
			p = s.top();
			s.pop();
			p = p->rchild;
		}
	}	
}
void PreTraversal(BTree & T)
{
	if (T == NULL)return;
	cout << T->objects ;
	PreTraversal(T->lchild);
	PreTraversal(T->rchild);

}
void InoderTraversal(BTree &T)
{
	if (T == NULL) return;
	InoderTraversal(T->lchild);
	cout << T->objects;
	InoderTraversal(T->rchild);
}
void inoderTraversal(BTree &T)
{
	stack<BTree> s;
	BTNode *p = T;
	while (!(p == NULL&&s.empty()))
	{
		while (p != NULL)
		{

			s.push(p);
			p = p->lchild;
		}
		if (!s.empty())
		{
			p = s.top();
			cout << p->objects;
			s.pop();
			p = p->rchild;
		}
	}


}
void PosTraversal(BTree& T)
{
	if (T == NULL)return;
	PosTraversal(T->lchild);
	PosTraversal(T->rchild);
	cout << T->objects;
}
void posTraversal(BTree& T)
{
	stack<StackType> s;
	BTree p=T ;
	int sign;
	while (!(p == NULL&&s.empty()))
	{
		StackType *q = new StackType();
		if (p != NULL)
		{
			
			q->T = p;
			q->flag = 1;
			s.push(*q);
			p = p->lchild;
		}
		else
		{
			*q = s.top();
			p = q->T;
			sign = q->flag;
			s.pop();
			if (sign == 1)
			{
				q->T = p;
				q->flag = 2;
				s.push(*q);
				p = p->rchild;
			}
			else
			{
				cout << p->objects;
				p = NULL;
				delete q;
			}

		}

	}
}