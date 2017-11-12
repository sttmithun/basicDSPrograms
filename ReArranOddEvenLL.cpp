#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node* reArrange(Node* head)
{
	if(head==NULL)
		return NULL;
	Node* temp=head;
	int count=0;
	Node* prev=NULL;
	while(temp != NULL)
	{
		if(temp->data & 1)
		{
			prev=temp;
			temp=temp->next;
		}
		else if(count==0)
		{
				prev->next=temp->next;
				temp->next=head;
				head=temp;
				temp=prev;
				count++;
		}
		else
		{
				prev->next=temp->next;
				temp->next=head->next;
				head->next=temp;
				temp=prev;
		}
	}
	return head;
}
Node* newNode(int data)
{
	Node* temp=new Node();	
	temp->data=data;
	temp->next=NULL;
	return temp;
}
void print(Node* head)
{
	if(head==NULL)
		return;
	Node* temp=head;
	while(temp !=NULL)
	{
		cout<<" "<<temp->data;
		temp=temp->next;
	}
}
int main()
{
	Node* head=newNode(3);
	head->next=newNode(5);
	head->next->next=newNode(8);
	head->next->next->next=newNode(11);
	head->next->next->next->next=newNode(14);
	print(head);
	Node *dis=reArrange(head);
	cout<<"\n";
	print(dis);
	return 0;
}
					
			
