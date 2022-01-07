#include<iostream>
#include<conio.h>
using namespace std;

// function prototype
void preorder(int [][10], int);
int main()
{
	int nodes, tree[10][10], x, y, root = 1;
	cout<<"Please input the number of nodes: ";
	cin>>nodes;
	cout<<"Please input the left-right child array representation of the tree/graph: ";
	for(int i = 1; i <= nodes; i++)
	{
		cin>>x;
		cin>>y;
		tree[i][0] = x; // left child
		tree[i][1] = y; // right child
	}
	cout<<"Pre-order traversal is: "<<endl;
	preOrder(tree, root);
	getch();
	return 0;
}

// Pre order traversal function

void preOrder(int tree[10][10], int root)
{
	if(root == 0)
		return;

	cout<<root<<"\t";

	// Left Child
	if(tree[root][0] != 0)
		preOrder(tree, tree[root][0]);

	//Right Child
	if(tree[root][1] != 0)
		preOrder(tree, tree[root][1]);
}