#include<iostream>
#include<vector>
using namespace std;
 
#define fo(a,b,c) for(int a = b; a < c ; a++)

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
}*head;

Node *reverse(Node *node)
{
    if(node == NULL)
        return NULL;

    if(node -> next == NULL)
    {
        head = node;
        return node;
    }

    Node *temp = reverse(node->next);
    temp ->next = node;
    node -> next = NULL;

    return node;
    
}

int main() 
{
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node *temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    
    reverse(head);

    Node *temp2 = head;
    while(temp2)
    {
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }
 
 
return 0;
   
}