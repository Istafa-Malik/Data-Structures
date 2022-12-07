#include<iostream> 
using namespace std;
struct Node
{
	int Data;
	Node* next;
};

class Graph
{
	int V;
	Node *adj_Row;
public:
	Graph(int Vertices)
	{
		V = Vertices;
		adj_Row = new Node[V];
		for (int i = 0; i < V; i++)
		{
			adj_Row[i].next = NULL;
		}
	}
	void addEdge(int v, int w)
	{
		Node*NewNode = new Node;
		NewNode->Data = w;
		NewNode->next = NULL;

		Node*curr = adj_Row[v].next;
		if (curr == NULL)
		{
			adj_Row[v].next = NewNode;
		}
		else
		{
			Node*prev = curr;
			while (curr != NULL)
			{
				prev = curr;
				curr = curr->next;
			}
			prev->next = NewNode;
		}
	}
	void Depth_First_Search(int v)
	{
		bool *visited = new bool[V];
		for (int i = 0; i < V; i++)
		{
			visited[i] = false;
		}

		DFS_Print(v, visited);
	}
	void DFS_Print(int v, bool visited[])
	{
		visited[v] = true;
		cout << v << " ";

		Node*curr = adj_Row[v].next;
		while (curr != NULL)
		{
			if (!visited[curr->Data])
			{
				DFS_Print(curr->Data, visited);
			}
			curr = curr->next;
		}
	}
};
void main()
{
	Graph DFS(4);
	DFS.addEdge(0, 1);
	DFS.addEdge(0, 2);
	DFS.addEdge(1, 2);
	DFS.addEdge(2, 0);
	DFS.addEdge(2, 3);
	DFS.addEdge(3, 3);

	cout << "Depth First Traversal" << endl;
	cout << " (Starting Vertex : " << 2 << ")" << endl;
	DFS.Depth_First_Search(2);
	cout << endl;
}

