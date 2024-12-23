/*
��д����void inDegree(adjMatrix g,int id[])
��void outDegree(adjMatrix g,int od[])��
�ֱ����ڽӾ����������ͼg��ÿ���������Ⱥͳ��ȣ�
����ֱ����id��od �У��������㷨��ʱ�临�ӶȺͿռ临�Ӷȡ�
�ֱ�������ͼ������ͼ�������
*/

#include<iostream>

using namespace std;

#define MAX_VERTICES 100

//������һ���ڽӾ�������adjMatrix
typedef
int adjMatrix [MAX_VERTICES][MAX_VERTICES];

//�������-����ͼ
void inDegree(adjMatrix g,int id[],int n) {
	//��ʼ���������id[]
	for(int i=0; i<n; ++i)
		id[i]=0;

	//�����ڽӾ���������
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			if(g[j][i]==1)
				id[i]++; 
		}
	}
}

//�������-����ͼ
void outDegree(adjMatrix g,int od[],int n) {
	//��ʼ���������od[]
	for(int i=0; i<n; ++i)
		od[i]=0;

	//�����ڽӾ���������
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			if(g[i][j]==1)
				od[i]++; 
		}
	}
}




int main() {
	int n=4;  //ͼ�Ķ�����
	adjMatrix g={{0,1,0,0},
				 {0,0,1,1},
				 {1,0,0,0},
				 {0,1,0,0}}; //����ͼ
				 
	int inDeg[MAX_VERTICES],outDeg[MAX_VERTICES];
	
	//�������
	inDegree(g,inDeg,n);
	//�������
	outDegree(g,outDeg,n); 
	
	//������
	cout<<"In-degree:";
	for(int i=0;i<n;++i){
		cout<<inDeg[i]<<" ";
	}
	cout<<endl;
	
	//�������
	cout<<"out-degree:";
	for(int i=0;i<n;++i){
		cout<<outDeg[i]<<" ";
	}
	cout<<endl;
	
	
	
	return 0;
}











