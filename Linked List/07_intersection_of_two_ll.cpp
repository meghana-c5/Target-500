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

        Node* head = NULL;
        head = new Node(1);
        head -> next = new Node(3);
        head -> next -> next = new Node(1);
        head -> next -> next -> next = new Node(2);
        head -> next -> next -> next -> next = new Node(4);
        
        Node* l1 = head;
        head = head->next->next->next;
        Node* l2 = NULL;
        l2 = new Node(3);
        Node* head2 = l2;
        l2->next = head;

        print(l1);
        print(l2);
        //find lengths

        Node * temp = l1;
        int len1 = 0;
        while(temp)
        {
            len1++;
            temp = temp->next;
        }

        temp = l2;
        int len2 = 0;
        while(temp)
        {
            len2++;
            temp = temp->next;
        }

        // diff in len
        
        int diff = len1 - len2;

        if(diff < 0)
        {
            while(diff != 0)
            {
                l2 = l2->next;
                diff++;
            }
        }else{
            while(diff != 0)
            {
                l1 = l1->next;
                diff--;
            }
        }

        while(l1)
        {
            if(l1 == l2)
                break;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        cout<<"common node : "<<l1->data;
        
 
return 0;
   
}