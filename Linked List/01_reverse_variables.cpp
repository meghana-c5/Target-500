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


int main() 
{
    
    head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next= new Node(5);

    Node *temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;


    Node * curr = head, *prev = NULL, *next = NULL;
    
    while(curr != NULL)
    {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
 
return 0;
   
}