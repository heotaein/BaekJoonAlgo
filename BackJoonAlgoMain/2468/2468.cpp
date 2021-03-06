// 2468.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <vector>

template <typename T>
class TreeNode 
{
	friend class Tree<T>;
private:
	T data;
	std::vector<TreeNode> Nodes;
public:
	TreeNode(T data = 0, TreeNode *Node = NULL)
	{
		this->data = data;
		if(Node != NULL)
			this->Nodes.push_back(Node);
	}
};

template <typename T>
class Tree 
{
public:
	TreeNode<T>* root;
	Tree(T data = 0, TreeNode *Node = NULL)
	{
		root->data = data;
		if (Node != NULL)
			this->root->Nodes.push_back(Node);
	}

	void insertNode(TreeNode<T>* Node, TreeNode<T>* addNode)
	{
		Node->Nodes.push_back(addNode);
	}
};


int main()
{
	int N;
	std::cin >> N;

	int **Table = new int*[N];
	for (int i = 0; i < N; i++)
		Table[i] = new int[N];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cin >> Table[i][j];
		}
	}

	Tree<int> tree(Table[0][0]);
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == 0 && j == 0) {}
			else
			{
				//노드생성
				TreeNode<int> newNode(Table[i][j]);
				
			}

		}
	}




}


