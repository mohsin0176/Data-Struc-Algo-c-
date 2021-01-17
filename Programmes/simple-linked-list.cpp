#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
};
int main()
{
	Node* head=NULL;
	Node* first=NULL;
	Node* second=NULL;
	Node* third=NULL;
	Node* last=NULL;

	head=new Node();
	first=new Node();
	second=new Node();
	third=new Node();
	last=new Node();

	head->data=10;
	head->next=first;
	first->data=05;
	first->next=second;
	second->data=15;
	second->next=third;
	third->data=12;
	third->next=last;
	last->data=30;
	last->next=NULL;
	return 0;
}
