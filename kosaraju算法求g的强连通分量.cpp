/*
��д����bool strong_connected(linkList g),
�ж�ͼg�Ƿ���ǿ��ͨͼ������ǣ�����true�����򷵻�false��
ʹ��kosaraju�㷨��g��ǿ��ͨ�������������1��ǿ��ͨ������
��ͼg����ǿ��ͨͼ
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//�����ڽ���������
struct Node {
	int data;
	int v; //������
	Node* next;
};

class Graph {
	public:
		vector<Node*> adjList;

		//���캯��
		Graph(int v) {
			adjLis
			adjList.resize(v,NULL); //��ʼ��ÿ��������ڽ�����Ϊ��
		}

		//��ͼ�����һ����
		void addEdge(int u,int v) {
			Node* newNode=newNode;
			newNode->next=adjList[u];
			newNode->data=v;
			adjList[u]=newNode; //���½ڵ��������ͷ��
		}

		//DFS
		void DFS(int v,vector<bool>& visited,stack<int>& finishStack) {
			visited[v]=1;
			Node* adj=adjList[v];
			//�������еĵ�һ��������� 
			while(adj!= NULL){
				if(!visited[adj->v])
					DFS(adj->v,visited,finishStack);
			}
			adj=adj->next;
		}
		finishStack.push(v);
};






int main() {






	return 0;
}


