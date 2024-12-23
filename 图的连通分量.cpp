/*
��д����int ccn_dfs(adjMatrix g),����DFS�㷨��������
�ڽӾ����ʾ��ͼg����ͨ�����������������Ϊ����ֵ
*/

#include<iostream>
#include<vector>
using namespace std;

//�����������DFS���������ڷ��ʴӽڵ� node������������ͨ�ڵ�
void DFS(int node,const vector<vector<int> >&g,
         vector<bool>& visited) {
	visited[node]=true;
	//������ǰ�ڵ�������ڽӽڵ�
	for(int i=0; i<g.size(); ++i) {
		if(g[node][i]==1&& !visited[i]) {
			DFS(i,g,visited);
		}
	}
}


//����ͼ����ͨ�����ĺ���
int ccn_DFS(const vector<vector<int> >&g) {
	int n=g.size(); //ͼ�Ľڵ���
	vector<bool> visited(n,false);
	//��¼��ͨ����������
	int componentCount=0;
	//����ͼ�е�ÿһ���ڵ�
	for(int i=0; i<n; ++i) {
		if(!visited[i]) {
			DFS(i,g,visited);
			++componentCount;
		}
	}
	return componentCount;
}






int main() {
    // ʾ����ͼ���ڽӾ�������ͼ����ͨ�����캯����ʼ��
    vector<vector<int> > g(5, vector<int>(5, 0));  // ����һ�� 5x5 ���ڽӾ��󣬳�ʼֵȫΪ 0
    
    // �ֶ�����ڽӾ���
    g[0][1] = g[1][0] = 1;
    g[1][2] = g[2][1] = 1;
    g[2][3] = g[3][2] = 1;
    
    // �ڵ� 4 ������û������
    // g[4][4] = 0  // Ĭ����0�� ����Ҫ��ʽ��ֵ
    
    // ���� ccn_dfs ����������ͨ����������
    int result = ccn_DFS(g);
    
    // ���������
    cout << "��ͨ��������: " << result << endl;  // ������

	return 0;
}


