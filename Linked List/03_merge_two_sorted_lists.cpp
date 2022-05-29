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
}*head1,*head2;

Node *merge(Node *l1, Node *l2)
{
    if(l1->data > l2 -> data)
        swap(l1,l2);

    Node *res = l1;

    while(l1 && l2)
    {
        Node *temp = NULL;

        while(l1 && l1 -> data <= l2 -> data){
            temp = l1;
            l1 = l1 -> next;
        }

        temp -> next = l2;
        swap(l1,l2);
    }

    return res;

}


int main() 
{   

        cout<<"Insert into first linked list : ";
    
        int ch = 1;
        Node *temp;
        do{
            cout<<"Enter node data : ";
            int n; cin>>n;
            if(!head1)
            {
                head1 = new Node(n);
                temp = head1;
            }
            else
            {
                temp -> next = new Node(n);
                temp = temp -> next;
            }
    
            cout<<"choice : ";
            cin>>ch;
    
        }while(ch);
    
        temp = head1;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    
        cout<<endl;

        cout<<"Insert into second linked list : ";

        ch = 1;
        do{
            cout<<"Enter node data : ";
            int n; cin>>n;
            if(!head2)
            {
                head2 = new Node(n);
                temp = head2;
            }
            else
            {
                temp -> next = new Node(n);
                temp = temp -> next;
            }
    
            cout<<"choice : ";
            cin>>ch;
    
        }while(ch);
    
        temp = head2;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    
        cout<<endl;

        Node *res = merge(head1,head2);

        temp = res;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    
        cout<<endl;
 
return 0;
   
}