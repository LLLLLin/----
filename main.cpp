#include"LinkBinaryTree.h"
int main()
{
	BTree T;
	init(T);
	preTraversal(T);
	cout << endl;
	PreTraversal(T);
	cout << endl;
	inoderTraversal(T);
	cout << endl;
	InoderTraversal(T);
	cout << endl;
	PosTraversal(T);
	cout << endl;
	posTraversal(T);

	system("pause");
	return 0;
}