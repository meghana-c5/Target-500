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

int length(Node* &head){
    int len = 0;
    Node *temp = head;
    while(temp){
        len++;
        temp = temp->next;
    }
    return len;
}


int main() 
{

        Node *head = NULL;
        insert(head);
        print(head);

        cout<<"Enter group size : ";
        int k;cin>>k;

        int len = length(head);
    
        Node* dummyHead = new Node(0);
        dummyHead->next = head;
        
        Node* pre = dummyHead;
        Node* cur;
        Node* nex;
        
        while(len >= k) {
            cur = pre->next;
            nex = cur->next;
            for(int i=1;i<k;i++) {
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            len -= k;
        }
        dummyHead = dummyHead -> next;

        print(dummyHead);
 
return 0;
   
}