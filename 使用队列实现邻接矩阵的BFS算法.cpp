/*
ʹ�ö���ʵ���ڽӾ����BFS�㷨
*/

#include<iostream>
#include<queue>
#define MAX_NODES 100
using namespace std;

class Graph {
	public:
		int adjMatrix[MAX_NODES][MAX_NODES];
		int numVertices;  //ͼ�нڵ���
		//��ʼ���ڽӾ���
		Graph(int vertices) {
			numVertices=vertices;
			for(int i=0; i<numVertices; ++i) {
				for(int j=0; j<numVertices; ++j)
					adjMatrix[i][j]=0;
			}
		}

		//����ͼ��ӱ�
		void addEdge(int u,int v) {
			adjMatrix[u][v]=1;
			adjMatrix[v][u]=1;
		}

		//BFS�㷨
		void BFS(int start) {
			bool visited[MAX_NODES]= {false};
			queue<int>q;
			visited[start]=1;
			q.push(start);

			while(!q.empty()) {
				int v=q.front();
				q.pop();
				cout<<v<<" ";
				for(int i=0; i<numVertices; ++i) {
					if(adjMatrix[v][i]==1 && visited[i]==0) {
						visited[i]=1;
						q.push(i);
					}
				}
			}
		}
};



int main() {
	//����ͼ����ӱ�
	 Graph g(6); 
	 g.addEdge(0,1); 
     g.addEdge(0,2);
	 g.addEdge(1,3);
	 g.addEdge(2,4);
	 g.addEdge(3,5);

	cout<<"BFS traversal starting from node 0:";
	g.BFS(0);  //�ӽڵ�0��ʼ���� 


	return 0;
}


