#include <iostream>

using namespace std;

typedef struct  _BinNode
{
	int data;
	_BinNode *leftNode;
	_BinNode *rightNode;
}BinNode, *pBinNode;