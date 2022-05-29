/*
We are given access to nodes that we have to delete from the linked list. 
So, whatever operation we want to do in the linked list, 
we can operate in the right part of the linked list from the node to be deleted. 

The approach is to copy the next node’s value in the deleted node. 
Then, link node to next of next node. This does not delete that node but 
indirectly it removes that node from the linked list.
*/

#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};


void insert(Node* &head)
{
    int ch = 1;
        Node *temp;
        do{
            cout<<"Enter node data : ";
            int n; cin>>n;
            if(!head)
            {
                head = new Node(n);
                temp = head;
            }
            else
            {
                temp -> next = new Node(n);
                temp = temp -> next;
            }
    
            cout<<"choice : ";
            cin>>ch;
    
        }while(ch);
    
}

void print(Node* &head){
    Node *temp = head;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    
        cout<<endl;
}
int main() 
{

        Node *head = NULL;
        insert(head);
        print(head);

        cout<<"Enter node to be deleted : ";

        int n; cin>>n;

        Node *temp = head;
        while(temp)
        {
            if(temp->data != n)
                temp = temp->next;
            else 
                break;
        }

        temp -> data = temp -> next -> data;
        temp -> next = temp -> next -> next;

        print(head);
 
return 0;
   
}