#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
};
void printList(Node* n)
{
	while(n != NULL)
	{
	cout<<n->data<<"\n";
	n=n->next;
	}
}
int main()
{
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;


	head=new Node();
	second=new Node();
	third=new Node();

   head->data=10;
   head->next=second;

   second->data=20;
   second->next=third;

   third->data=30;
   third->next=NULL;
printList(head);
	return 0;
}
