/*
CODE LINK

https://www.codingninjas.com/studio/problems/flatten-a-linked-list_1112655?source=youtube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTabValue=SUBMISSION
*/

#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* child;

    public:
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->child=NULL;
    }
};


Node* merge(Node* down, Node* right){

	if(down==NULL){
		return right;
	}
	if(right==NULL){
		return down;
	}

	Node* ans= new Node(-1);
	Node* temp= ans;

	while(down!=NULL && right!=NULL){
		if(down->data < right->data){

			temp->child= down;
			temp= down;
			down= down->child;
		}
		else{

			temp->child= right;
			temp= right;
			right= right->child;
		}
	}

	while(down!=NULL){

			temp->child= down;
			temp= down;
			down= down->child;
	}

	while(right!=NULL){

			temp->child= right;
			temp= right;
			right= right->child;
	}

	ans= ans->child;
	return ans;
}


Node* flattenLinkedList(Node* head) 
{
	if(head==NULL || head->next==NULL){
		return head;
	}

	Node* down= head;
	Node* right = head->next;
	down->next=NULL;

	right= flattenLinkedList(right);

	Node* ans= merge(down,right);

	return ans;
}

int main(){
    return 0;
}