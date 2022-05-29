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


void insert(Node **head)
{
    int ch = 1;
        Node *temp;
        do{
            cout<<"Enter node data : ";
            int n; cin>>n;
            if(!*head)
            {
                *head = new Node(n);
                temp = *head;
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

void print(Node **head){
    Node *temp = *head;
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
        insert(&head);
        print(&head);

        //remove nth node

        int n; cin>>n;

        Node * slow, *fast;
        slow = fast = head;
        while(n--)
        {
            fast = fast->next;
        }
        while(fast->next)
        {
            slow = slow -> next;
            fast = fast -> next;
        }

        slow -> next = slow ->next ->next;


        //print list

        print(&head);
 
return 0;
   
}