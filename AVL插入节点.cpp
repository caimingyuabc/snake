/*
AVL������ڵ�   ʱ�临�Ӷ�ΪO(logn) 
*/

#include<iostream>
using namespace std;

//LL��ת,���ظ��ڵ� 
avlTree LL(avlTree A){
	
} 


//# avl���Ľڵ㶨��
typedef struct avlNode {
	int key;
	int h;  //��ǰ���ĸ߶�
	avlNode *lc,*rc;
	avlNode():h(1),lc(NULL),rc(NULL) {
	}
}*avlTree;

//# ��ȡ�����߶�
int avl_height(avlTree avl) {
	return (avl==NULL ? 0 : avl->h);
}


//# ����ڵ�
bool avl_insert(avlTree& t,int k) {
	//��tΪ����ʱ
	if(t==NULL) {
		t=new avlNode;
		t->key=k;
		return true;
	}

	//����ڵ�λ��t��������
	if(k<t->key) {
		avl_insert(t->lc,k);
		//����ʱ���t�����Ƿ�ƽ��
		if(avl_height(t->lc)-avl_height(t->rc)>1) {
			if(t->lc->key>k) t=RR(t);
			else t=LR(t);
		}
	}
	//����ڵ�λ��t��������
	else if(k>t->key) {
		avl_insert(t->rc,k);
		//����ʱ���t�����Ƿ�ƽ��
		if(avl_height(t->rc)-avl_height(t->lc)>1) {
			if(t->rc->key<k) t=RR(t);
			else t=RL(t);
		}
	}
	else
		return false;
		
	t->h=max(avl_height(t->lc),avl_height(t->rc))+1;   //���¸߶� 
}




int main() {


	return 0;
}


