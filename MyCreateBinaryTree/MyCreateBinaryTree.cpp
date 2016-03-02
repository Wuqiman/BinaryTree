// MyCreateBinaryTree.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "MyCreateBinaryTree.h"
using namespace std;

int CreateBinaryTree(pBinNode root)
{
	char tmp;
	cin>>tmp;
	if(tmp ==  'a')
	{
		root = NULL;
	}
	else
	{
		if(!root)
			return 0;
		root->data = rand();
		root->leftNode = new BinNode();
		CreateBinaryTree(root->leftNode);
		root->rightNode = new BinNode();
		CreateBinaryTree(root->rightNode);
		cout<<"Succed!!"<<endl;
	}
	return 1;
}

int preOrderVisitTree(pBinNode root)
{
	if (!root)
	{
		cout<<root->data<<endl;
		if(!root->leftNode)
		{
				preOrderVisitTree(root->leftNode);
				if(!root->rightNode)
				{
					preOrderVisitTree(root->rightNode);
					return 1;
				}
		}
	}
	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	pBinNode root = new BinNode();
	CreateBinaryTree(root);
	preOrderVisitTree(root);
	return 0;
}

