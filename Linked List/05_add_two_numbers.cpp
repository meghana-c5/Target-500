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

        Node *l1 = NULL;
        insert(&l1);
        print(&l1);

        Node *l2 = NULL;
        insert(&l2);
        print(&l2);

        //addition


        Node *res = new Node(0);
        Node *temp = res;

        
        int carry = 0;
        while( (l1 != NULL && l2 != NULL) || carry)
        {   
            int sum = 0;
            if(l1 != NULL){
                sum += l1->data;
                l1 = l1->next;
            }

            if(l2 != NULL){
                sum += l2->data;
                l2 = l2->next;
            }

            sum += carry;
            carry = sum/10;
            Node *node = new Node(sum%10);
            
            temp -> next = node;
            temp = temp->next;
        }

        res = res -> next;
        print(&res);
 
return 0;
   
}