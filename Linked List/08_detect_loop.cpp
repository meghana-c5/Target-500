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
            cout<<"Enter Node data : ";
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

void createCycle(Node* &head,int a,int b) {
    int cnta = 0,cntb = 0;
    Node* p1 = head;
    Node* p2 = head;
    while(cnta != a || cntb != b) {
        if(cnta != a) p1 = p1->next, ++cnta;
        if(cntb != b) p2 = p2->next, ++cntb;
    }
    p2->next = p1;
}

int main() 
{

        Node *head = NULL;
        insert(head);
        print(head);

        createCycle(head,1,3);

        Node* fast = head;
        Node* slow = head;

        bool found = false;
            
        while(fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
            {
                found = true;
                break;
            }
        }

        if(found)
            cout<<"cycle found";
        else
            cout<<"cycle not found";
        
 
return 0;
   
}