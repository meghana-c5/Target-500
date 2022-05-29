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

Node *middle(Node *head){
    Node *slow, *fast;
    slow = fast = head;

    while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;

    return slow;
}

int main() 
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

    temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    Node * mid = middle(head);

    cout<<mid->data<<"\n";
 
 
return 0;
   
}