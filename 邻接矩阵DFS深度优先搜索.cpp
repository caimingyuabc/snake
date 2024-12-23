/*
��д����ʹ���ڽӾ���ʵ��ͼg�Ķ���st������
���õݹ��㷨��ͼg�������������������ͬʱ���DFS����
*/

#include<iostream>
#include<vector>
using namespace std;

typedef vector<vector<int> > adjMatrix;

//��������㷨 DFS
void DFS(int st,adjMatrix& g,vector<bool>& visited,vector<int>& dfsOrder) {
	//��һ��ݹ鿪ʼ
	visited[st]=1;
	dfsOrder.push_back(st); //��¼DFS����
	int n=g.size();  //������

	//�Ե�ǰ�����ÿ���ڽӵ���еݹ�
	for(int i=0; i<n; ++i) {
		if(g[st][i]==1&&!visited[i]){
			DFS(i,g,visited,dfsOrder);
		}
	}
}

int main(){
	
	
	return 0;
}

